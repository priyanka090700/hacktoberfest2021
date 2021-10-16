/*
Problem : Swap two numbers without using third variable
Input: 5 6
Output: 6 5
*/


#include <iostream>

using namespace std;

int main()
{
    int a,b;
    std::cin >> a >>b;
    a = a+b;
    b = a-b;
    a = a-b;
    std::cout << "After swapping: "<<a<<" "<<b << std::endl;

    return 0;
}
