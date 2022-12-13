#pragma once
#include <string>
#include <ctype.h>

std::string printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int *arr, int size);
bool isAlphanumeric(std::string s);
bool nestedParens(std::string s);

bool divisible(int *prices, int size);
bool divides(int *prices, int size, int half_price, int p1, int p2);