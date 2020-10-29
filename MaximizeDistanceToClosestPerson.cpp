class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        int ans=0;
        int ct=0;
        
        int onepos=-1;
        int lastpos=-1;
        int none=0;
        
        for(int i=0;i<n;i++)
        {
            if(seats[i]==1)
            {
                none++;
                lastpos=i;
                if(onepos==-1)
                {
                    onepos=i;
                }
                
                ans=max(ans,ct);
                //cout<<"ans : "<<ans<<"\n";
                ct=0;
            }
            else
            {
                ct++;
            }
        }
        ans=max(ans,ct);
        
        if(none==1)
        {
            //cout<<"pos : "<<onepos<<"\n";
            return max(onepos,n-1-onepos);
        }
        
        return max((ans+1)/2,max(onepos,n-1-lastpos));
        
        
    }
};
