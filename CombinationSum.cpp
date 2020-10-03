class Solution {
public:
    vector<vector<int>> ans;
    int n=0;
    void csum(vector<int>& candidates, int target,vector<int>temp,int ssf,int index)
    {
        if(index==n || ssf>target)
        {
            return ;
        }
        
        if(ssf==target)
        {
            ans.push_back(temp);
            return ;
        }
        
        for(int i=index;i<n;i++)
        {
            temp.push_back(candidates[i]);
            
            csum(candidates,target,temp,ssf+candidates[i],i);
            
            temp.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        n=candidates.size();
        vector<int>temp;
        csum(candidates,target,temp,0,0);
        return ans;
    }
};
