//-------------------------------- PROBLEM STATEMENT---------------------------------------------
//Given two integers dividend and divisor, divide two integers without 
//using multiplication, division, and modulus operator. Task is to find the integer part of quotient only!!
//For this problem, assume that your function returns 2^31 − 1 when the division result overflows.
//--------------------------- SOLUTION--------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;
int bit_magic(int dividend, int divisor)
{
    if (dividend == INT_MIN && divisor == -1) {// base case to keep track of overflows
            return INT_MAX;
        }
        long dvd = abs(dividend), dvs = abs(divisor), ans = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        while (dvd >= dvs) {
            long temp = dvs, m = 1;
            while ((temp << 1) <= dvd) {
                temp <<= 1;
                m <<= 1;
            }
            dvd -= temp;
            ans += m;
        }
    return sign * ans;
}
int main()
{
    int divisor, dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Integer quotient using bit manipulation: ";
    cout << gbit_magic(dividend, divisor);
    return 0;
}
