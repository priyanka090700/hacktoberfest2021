class Solution {
public:
    
    bool static comp(string a,string b)
    {
        string ab=a.append(b);
        string ba=b.append(a);
        return ab>ba;
    }

    
    string largestNumber(vector<int>& nums) {
        int i,n=nums.size();
        vector<string>str;
        string ans="";
        
        for(i=0;i<n;i++)
        {
            str.push_back(to_string(nums[i]));
        }
        sort(str.begin(),str.end(),comp);
        for(i=0;i<n;i++)
        {
            ans=ans+str[i];
        }
        int j=0;
        while(ans[j]=='0')
        {
            ans.erase(j);
        }
        if(ans=="")return "0";
        return ans;
    }
};
