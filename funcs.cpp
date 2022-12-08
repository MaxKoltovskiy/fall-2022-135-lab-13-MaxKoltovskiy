#include "funcs.h"

std::string printRange(int left, int right) {
    if(left > right) {
        return "";
    }
    return std::to_string(left) + " " + printRange(left+1, right);
}

int sumRange(int left, int right) {
    if(left > right) {
        return 0;
    }
    return left + sumRange(left+1, right);
}

int sumArray(int *arr, int size) {
    if(size == 0) {
        return 0;
    }

    return arr[size-1] + sumArray(arr, size-1);
}

bool isAlphanumeric(std::string s) {
    if(s.size() == 0) {
        return true;
    }
    if((isalpha(s[0]) || isdigit(s[0])) ) {
        return isAlphanumeric(s.substr(1));
    }
    
    return false;
    
}