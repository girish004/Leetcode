class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char,int>m;
        int count=0,max=0;
        for(int i=0;i<s.length();i++)
        {
            count=0;
            for(int j=i;j<s.length();j++)
            {
                if(m[s[j]])
                {
                    m.clear();
                    if(max<count){max=count;}
                    break;
                }
                else
                {
                    m[s[j]]=1;
                    count++;
                    if(max<count){max=count;}
                }
            }
        }
        m.clear();
        return max;
        
    }
};
