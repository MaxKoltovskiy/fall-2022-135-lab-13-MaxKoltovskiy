#include "funcs.h"
#include <iostream>

int main() 
{
    std::cout<<"Range of numbers between 5 and 10\n"; 
    std::cout<<"\t"<< printRange(5,10)<< "\n";

    std::cout<<"\n-----------------------------------------\n";

    int left = 1, right = 5;
    std::cout<< "The sum of the range "<< left<< " and "<< right;
    std::cout<< " is "<< sumRange(left, right)<< "\n";

    std::cout<<"\n-----------------------------------------\n";

    int size = 10;
    int *arr = new int[size];
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    std::cout<< "The sum of values in the array is "<< sumArray(arr, size)<< "\n";
    delete[] arr;

    std::cout<<"\n-----------------------------------------\n";

    std::string s1 = "AB2gs0o1l";
    std::string s2 = "HJK-OLA-2345";

    std::cout<< "Is "<< s1<< " alphanumeric: "<< isAlphanumeric(s1)<< "\n";
    std::cout<< "Is "<< s2<< " alphanumeric: "<< isAlphanumeric(s2)<< "\n";

    std::cout<<"\n-----------------------------------------\n";

    return 0;
}