#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Print Range"){
    std::string range = "-2 -1 0 1 2 3 4 5 6 7 8 9 10 ";
    CHECK(printRange(-2,10).compare(range) == 0);
    CHECK(printRange(5,2).compare("") == 0);
}
TEST_CASE("Sum Range"){
    CHECK(sumRange(-2,10) == 52);
    CHECK(sumRange(6,3) == 0);
}
TEST_CASE("Sum Array"){
    int size = 5;
    int *arr = new int[size];
    arr[0] = 12; arr[1] = 17; arr[2] = -5; arr[3] = 3; arr[4] = 7;

    CHECK(sumArray(arr, size) == 34);
    delete[] arr;
}
TEST_CASE("is Alphaumeric"){
    CHECK(isAlphanumeric("") == true);
    CHECK(isAlphanumeric("Abcd1234xyz") == true);
    CHECK(isAlphanumeric("KLMN 8-7-6") == false);
}
TEST_CASE("Nested Parentheses"){
    CHECK(nestedParens("((()))") == true);
    CHECK(nestedParens("") == true);
    CHECK(nestedParens("(()") == false);
}
// TEST_CASE("Divisible"){
//     int prices[] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
//     CHECK(divisible(&prices[0], 9) == true);
// }