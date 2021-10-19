#include <iostream>
int main()
{
    int a;
    printf("enter the size of the array =? ");
    scanf("%d", &a);
    int A[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &A[i]);
    }
    int B[a];
    for (int i = 0; i < a; i++)
    {
        B[i] = A[a-i - 1];
    }
    for (int j = 0; j < a; j++)
    {
        printf("%d ", B[j]);
    }

    return 0;
}