/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
      int a,b,c;
      printf("Enter 3 numbers:");
      scanf("%d %d %d", &a, &b, &c);
      if(a>b && a>c)
      printf("a is greater");
      else if(b>a && b>c)
      printf("b is greater");
      else 
      printf("c is greater");

    return 0;
}



