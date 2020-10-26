class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        int n=query_row;
        int c=query_glass;
        double x;
        
        vector<vector<double> >ar(101,vector<double>(101,0));
        ar[0][0]=poured;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                x=(ar[i][j]-1.0)/2.0;
                if(x>0)
                {
                    ar[i+1][j]+=x;
                    ar[i+1][j+1]+=x;
                }
            }
        }
        
        return min(1.0,ar[n][c]);
        
    }
};
