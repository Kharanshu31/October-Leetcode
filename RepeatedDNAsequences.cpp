class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        set<string>ss;
        set<string>already;
        int n=s.length();
        vector<string>ans;
        for(int i=0;i<=n-10;i++)
        {
            string t=s.substr(i,10);
            //cout<<" t : "<<t<<"\n";
            if(ss.find(t)!=ss.end() && already.find(t)==already.end())
            {
                ans.push_back(t);
                already.insert(t);
                continue;
            }
            ss.insert(t);
        }
        
        return ans;
    }
};
