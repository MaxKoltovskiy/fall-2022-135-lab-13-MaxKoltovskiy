#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Print Range"){
    std::string range = "-2 -1 0 1 2 3 4 5 6 7 8 9 10 ";
    CHECK(printRange(-2,10).compare(range) == 0);
    CHECK(printRange(5,2).compare("") == 0);
}