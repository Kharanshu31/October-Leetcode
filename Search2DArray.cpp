class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n=matrix.size();
        if(n==0)
            return false;
        int m=matrix[0].size();
        if(m==0)
            return false;
        
        int pos=-1;
        for(int i=0;i<n;i++)
        {
            if(target<=matrix[i][m-1] && target>=matrix[i][0])
            {
                pos=i;
                break;
            }
        }
        
        if(pos==-1)
            return false;
        
        for(int i=0;i<m;i++)
        {
            if(target==matrix[pos][i])
                return true;
        }
        
        return false;
        
            
    }
};
