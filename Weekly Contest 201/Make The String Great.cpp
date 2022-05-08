class Solution {
public:
    string makeGood(string s) {
        int i=0;
        int n=s.size();
        while(i<n-1)
        {
            int x=s[i]-s[i+1];
            if(x==32 || x==-32)
            {
                s.erase(i,2);
                 if(i>0)
                 {
                     i--;
                 }
                n=n-2;
            }
            else
            {
                i++;
            }
        }
        return s;
    }
};
