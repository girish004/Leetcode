class Solution {
public:
    int myAtoi(string s) {
        bool lead=true;
        long long int ans=0;
        bool pos=true,sign=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ' && lead)
                continue;
            lead=false;
            if(s[i]=='+' || s[i]=='-' || (s[i]>=48 && s[i]<=57 ))
            {    
                if(s[i]=='-' && !sign){pos=false;sign=true;continue;}
                if(s[i]=='+' && !sign){sign=true;continue;}
                if(s[i]=='+' && sign)break;
                if(s[i]=='-' && sign)break;
                sign=true;
                if(ans*10<21474836470){
                ans=ans*10;
                ans=ans+(s[i]-48);}
                else{break;}
            }
            else
            {
                break;
            }
        }
        if(!pos){ans=-ans;}
        if(-2147483648<ans && 2147483647>ans){return (int) ans;}
        else if(pos) return 2147483647;
        else if(!pos) return -2147483648;
        return 0;
    }
};