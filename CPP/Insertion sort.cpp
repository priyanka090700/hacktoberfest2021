/*Problem : Insertion Sort
Input: 6
12 55 9 3 5 18
Output: 3 5 9 12 18 55
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[100],n;
    std::cin >> n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
            arr[j + 1] = key;
    }
    
    for(int i=0;i<n;i++)
    std::cout << arr[i] << " ";
    return 0;
}

