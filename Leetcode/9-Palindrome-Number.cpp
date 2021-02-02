class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        else
        {
            long long int y=0,rem=0,num=x;
            while(x)
            {
                y=y*10;
                rem=x%10;
                y=y+rem;
                x=x/10;
            }
            if(num==y) return true;
            else return false;
        }
    }
};