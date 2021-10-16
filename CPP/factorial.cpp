/*
Problem statement: Calculate factorial of a number
Input : 5 
Output : 120
*/


#include <iostream>

using namespace std;

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    f= f*i;
    
    return f;
}

int main()
{
   int n,fac;
   cout<<"Enter the number whose factorial you want to calculate\n";
   std::cin >> n;
   fac = fact(n);
   cout<<fac;

    return 0;
}
