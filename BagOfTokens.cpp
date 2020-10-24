class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=n-1;
        int scr=0;
        int mxscr=0;
        while(i<=j)
        {
            if(P>=tokens[i])
            {
                scr++;
                mxscr=max(mxscr,scr);
                P-=tokens[i];
                i++;
            }
            else if(scr>0)
            {
                scr--;
                P+=tokens[j];
                j--;
            }
            else
            {
                break;
            }
        }
        
        return mxscr;
    }
};
