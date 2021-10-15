class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int l = 0, r = n - 1;
        int ans = 0;
        
        while(l < r)
        {
            int tmp = (r - l) * min(height[r] , height[l]);
            
            ans = max(ans, tmp);
            
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return ans;
    }
};

int main()
{
  int n;
  cout<<"Enter the value of n :- ";
  cin>>n;
  
  vector<int> V(n);
  
  for(int i = 0; i < n; i++)
  {
    cin>>V[i];
  }
  
  Solution obj;
  
  int ans = obj.maxArea(V);
  
  cout<<"Container With Most Water :- "<<ans;
}
