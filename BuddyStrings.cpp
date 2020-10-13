class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.length()!=B.length())
            return false;
        
        int ct=0;
        vector<int>h1(26,0);
        vector<int>h2(26,0);
        for(int i=0;i<A.length();i++)
        {
            h1[A[i]-'a']++;
            h2[B[i]-'a']++;
            if(A[i]!=B[i])
                ++ct;
        }
        bool flag=false;
        for(int i=0;i<26;i++)
        {
            if(h1[i]!=h2[i])
                return false;
            
            if(h1[i]>1)
                flag=true;
            
        }
        
        if(ct==0 && flag)
            return true;
        
        if(ct==2)
            return true;
        
        return false;
        
    }
};
