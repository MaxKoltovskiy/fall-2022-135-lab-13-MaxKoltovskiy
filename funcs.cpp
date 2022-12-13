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

bool nestedParens(std::string s) {
    if( !s.compare("") ) {
        return true;
    }
    if( ( s[0] == '(' ) && ( s[s.size()-1] == ')' ) ) {
        return nestedParens(s.substr(1, s.size()-2));
    } 

    return false;
}

bool divisible(int *prices, int size) {
    if((sumArray(prices,size) %2) != 0) {
        return false;
    }

    return divides(prices, size, (sumArray(prices,size)/2), 0, 0);
    

}

bool divides(int *prices, int size, int half_price, int p1, int p2) {
    if(size == 0){
        if(p1 == half_price && p2 == half_price) {
            return true;
        }
        else {
            return false;
        }
    }

    if(((p1+ *prices) <= half_price) && divides(prices+1, size-1, half_price, p1+*prices,p2)) {
        return true;
    }
    else if((p2+ *prices) <= half_price && divides(prices+1, size-1, half_price, p1, p2+*prices)) {
        return true;
    }
    return false;
}