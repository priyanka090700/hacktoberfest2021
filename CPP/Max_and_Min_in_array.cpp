/*
Problem: Find maximum and minimum element in the array
Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
min = 1, max =  10000*/




#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}


pair<long long, long long> getMinMax(long long a[], int n) {
    pair< long long,long long > p;
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++)
    if(a[i]>max)
    max = a[i];
    
    for(int i=0;i<n;i++)
    if(a[i]<min)
    min = a[i];
    
    p = make_pair(min,max);
    return(p);
}
