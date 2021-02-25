class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        bool dp[n][n];
        memset(dp, 0, sizeof(dp));
        int start=0,maxlen=1;
        for(int i=0;i<n;i++)
            dp[i][i]=true;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=true;
                start=i;
                maxlen=2;
            }
        }
        for(int len=3;len<=n;len++)
        for(int i=0;i<n-len+1;i++)
        {
            int j=i+len-1;
            if(dp[i+1][j-1] && s[i]==s[j])
            {
                dp[i][j]=true;
                if(len>maxlen)
                {
                    start=i;
                    maxlen=len;
                }
            }
        }
        string ans="";
        for(int i=start;i<start+maxlen;i++)
        ans=ans+s[i];
        return ans;
    }
};