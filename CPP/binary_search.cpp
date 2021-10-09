/*
Problem statement: Search a element in a given array
Input:
6   Array must be in sorted order
3 5 7 8 9 12
9
Output:
Element found at index: 4
*/

// Binary Search in C++

#include <iostream>
using namespace std;

int binary_search(int array[], int l, int r,int x) {

  // traverse the array sequencially
  while(l<=r){
    int mid = (l+r)/2;
    if (array[mid] == x)
      return mid;
    else if(array[mid]>x)
      r = mid-1;
    else
      l = mid+1;
  }
  return -1;
}

int main() {
  int n;
  cin>>n;
  int array[n];
  for(int i =0;i<n;i++){
    cin>>array[i];
  }
  cout<<"Enter Element to search\n";
  int x;
  cin>>x;
  int result = binary_search(array,0, n-1, x);

  (result == -1) ? cout << "Element not found " : cout << "Element found at index: "<<result;
}
