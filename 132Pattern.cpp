class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int n=nums.size();
       if(n<3)
           return false;
       vector<int>l(n,INT_MAX); 
       for(int i=1;i<n;i++)
       {
           l[i]=min(l[i-1],nums[i-1]);
       }
        
        set<int>s;
        s.insert(nums[n-1]);
        for(int i=n-2;i>=1;i--)
        {
            auto it=s.lower_bound(nums[i]);
            if(it!=s.begin())
            {
                it--;
                if(l[i]<nums[i]&&l[i]<*it) 
                    return true;
            }
            s.insert(nums[i]);
        }
        
        return false;
    }
};
