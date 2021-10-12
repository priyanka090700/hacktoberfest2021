/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, num, r, result=0;
    printf("Enter a number:");
    scanf("%d", &num);
    /* for(n=num; n!=0; n=n/10)
    {
        r=n%10;
        result= result*10+ r;
    } */
    n=num;
    while(n>0)
    {
    r= n%10;
    result= result*10+ r;
    n=n/10;
    }
    if(result== num)
    printf("It is palindrome");
    else
    printf("it is not a palindrome");
    return 0;
}


