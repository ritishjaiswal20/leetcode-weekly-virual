class Solution {
public:
    string invert(string s)
    {
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                s[i]='1';
            }          
            else
            {
                s[i]='0';
            }
        }
        return s;
    }
    string kth(int n)
    {   
        string s2="0";
        if(n==1)
        {
            return s2;
        }
        int i=2;
        while(i<=n)
        {
            s2=s2+'1'+invert(s2);
            i++;
        }
        return s2;
    }
    char findKthBit(int n, int k) {
        string S=kth(n);
        
        return S[k-1];
    }
};
