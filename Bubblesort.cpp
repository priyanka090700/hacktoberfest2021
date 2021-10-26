// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
#include <algorithm.h>
using namespace std;


{
    int temp = *l;
    *l = *mn;
    *mn = temp;
}

// A function to implement bubble sort
void bubbleSort(int array[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)	
	
	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (array[j] > array[j+1])
			Arrayswap(&array[j], &array[j+1]);
}
/* bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order */
/* Function to print an array */
void printTheArray(int array[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", array[i]);
    printf("\n");


// Driver code
int main()
{


	int array[] = {64, 34, 25, 12, 22, 11, 90, 1, 2, 3 , 7,8};

//Hii there
	int n = sizeof(array)/sizeof(array[0]);
	bubbleSort(array, n);

	cout<<"Sorted array is: \n";

	printTheArray(array, n);
	cout<<"HEllo hackober "<<767467+44;
	return 0;
}
