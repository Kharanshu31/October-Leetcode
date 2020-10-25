class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<bool>dp(n+1,false);
        for(int i=1;i<=n;i++)
        {
            int temp=sqrt(i);
            if(temp*temp==i)
            {
                dp[i]=true;
                continue;
            }
            
            for(int j=1;j*j<i;j++)
            {
                if(!dp[i-(j*j)])
                {
                    dp[i]=true;
                    break;
                }
            }         
        }
        
        return dp[n];
    }
};
