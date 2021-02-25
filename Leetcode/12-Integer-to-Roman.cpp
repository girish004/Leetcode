class Solution {
public:
    string intToRoman(int num) {
        string str="";
        map <int,string>m;
        m[1]="I";m[5]="V";m[10]="X";m[50]="L";m[100]="C";m[500]="D";m[1000]="M";
        int place=1;
        while(num)
        {
            int rem=num%10;
            if(rem>0 && rem<4)
            {
                for(int i=0;i<rem;i++){str=m[place]+str;}
                place=place*10;
            }
            else if(rem==4)
            {
                str=m[place*5]+str;str=m[place]+str;place=place*10;
            }
            else if(rem==5)
            {
                str=m[place*5]+str;place=place*10;
            } 
            else if(rem>5 && rem <9)
            {
                for(int i=0;i<rem-5;i++){str=m[place]+str;}
                str=m[place*5]+str;place=place*10;
            }
            else if(rem==9)
            {
                str=m[place*10]+str;str=m[place]+str;
                place=place*10;
            }
            else if(rem==0) place=place*10;
            num=num/10;
        }
        return str;
    }
};