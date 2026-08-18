class Solution {
public:
    string longestPrefix(string s) {
        vector<int>longestPrefix(s.size(),0);
        int pre=0,suf=1;
        while(suf<s.size())
        {
            if(s[pre]==s[suf])
            {
                longestPrefix[suf]=pre+1;
                pre++,suf++;
            }
            else
            {
                if(pre==0)
                {
                    longestPrefix[suf]=0;
                    suf++;
                }
                else{
                    pre=longestPrefix[pre-1];
                }
                    
                }
            }
        
        int len = longestPrefix[s.size() - 1];
        return s.substr(0, len);
    }
};