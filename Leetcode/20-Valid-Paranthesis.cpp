class Solution {
public:
    bool isValid(string s) {
        stack <char> stk;
        stk.push('0');
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {stk.push(s[i]);}
            else if((s[i]==')' && stk.top()=='(') ||
                    (s[i]==']' && stk.top()=='[') ||
                    (s[i]=='}' && stk.top()=='{'))
            {stk.pop();}
            else{stk.push(s[i]);break;}
        }
        if(stk.size()==1){return true;}
        else{return false;}
    }
};