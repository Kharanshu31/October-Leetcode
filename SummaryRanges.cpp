class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if(nums.empty())
            return ans;
        int i=0;
        while(i<nums.size())
        {
            
            int j=i+1;
            while(j<nums.size() && nums[j]-nums[i]==j-i)
                j++;
            
            if(j==i+1)
            {
                ans.push_back(to_string(nums[i]));
                i++;
                continue;
            }
            j--;
            string s=to_string(nums[i]);
            s+="->";
            s+=to_string(nums[j]);
            ans.push_back(s);
            i=j+1;
        }
        
        return ans;
    }
};
