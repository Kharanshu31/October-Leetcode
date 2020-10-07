class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==0)
            return 1;
        set<int>::iterator ptr;
        set<int>s;
        for(int i=0;i<=31;i++)
        {
            s.insert((1<<i));
        }

        for(ptr=s.begin();ptr!=s.end();ptr++)
        {
            if((*ptr)==N)
                return N-1;
        }

        set<int>::iterator it=s.lower_bound(N);

        return (*it-N-1);
    }
};
