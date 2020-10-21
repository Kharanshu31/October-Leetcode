class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ar) {
        int n=ar.size();
        vector<int>ans;
        stack<int>s;
        for(int i=0;i<n;i++)
        {
            bool flag=true;
            int x=abs(ar[i]);
            while(!s.empty() && ar[i]<0 && s.top()>0)
            {
                if(s.top()<x)
                    s.pop();
                else
                {
                    if(s.top()==x)
                        s.pop();
                    flag=false;
                    break;
                }
            }
            if(flag)
                s.push(ar[i]);
        }
        
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
