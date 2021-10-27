/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter the number of terms upto which sum of natural numbers are to be found: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
        sum= sum+ i;
    }
    printf("The sum of %d natural numbers are: %d", n, sum);

    return 0;
}

