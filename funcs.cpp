#include "funcs.h"

std::string printRange(int left, int right) {
    if(left > right) {
        return "";
    }
    return std::to_string(left) + " " + printRange(left+1, right);
}