#include<iostream>
#include<string>
#include<vector>
// Include headers as needed
#define S 20
using namespace std;
void print(const vector<int> & v) 
{
  for (int i = 0; i < v.size(); ++i) 
    cout << v.at(i) << " ";
  cout << endl;
}
#include<bits/stdc++.h>
void removeDuplicates(vector<int>& v) {
	unordered_set<int> s;
  vector<int> temp;
  for(int k:v)
    s.insert(k);
  for(auto it = v.begin();it!=v.end();it++){
    auto k = s.find(*it);
    if(k!=s.end()){
      s.erase(k);
      temp.push_back(*it);
    }
  }
  v=temp;
}
int main()
{
  int x[S],rem;
  int n,min,max;
  cin>>n;
  for(int i=0;i<n;i++) cin>>x[i];
  vector<int> v(x, x + n);
  removeDuplicates(v);
  print(v);
  return 0;
}
