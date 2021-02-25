class Solution {
public:
    string convert(string s, int row) {
        int n=s.size();
        string ans="";
        bool dp[n];
        if(row==n || row==1) return s;
        for(int i=0;i<n;i++) dp[i]=false;
        for(int i=0;i<row;i++)
        {
            if(i<n && !dp[i]){
            ans+=s[i];
            dp[i]=true;}
            int c=row-i;
            int temp=c+(c-2);
            for(int j=i+c+(c-2);j<n;)
            {
                if(j<n && !dp[j]){
                ans=ans+s[j];
                dp[j]=true;}
                j=j+i+i;
                if(j<n && !dp[j])
                {
                    ans=ans+s[j];
                    dp[j]=true;
                }
                j=j+temp;
                
            }
        }
        return ans;
    }
};