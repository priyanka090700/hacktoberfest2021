class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mapp;
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(mapp.find(x)!=mapp.end())
            {
                return {mapp[x],i};
            }
            else
            {
                mapp.insert({nums[i],i});
            }
        }
        return{};
    }
};
