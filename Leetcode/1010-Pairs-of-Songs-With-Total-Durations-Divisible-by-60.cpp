class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        map <int,int> mp;
        for(int i=0;i<time.size();i++)
        {
            int t=time[i]%60;
            if(mp[(60-t)%60])
            count=count+mp[(60-t)%60];
            if(mp[t]){mp[t]++;}
            else{mp[t]=1;}
        }
        
        return count;
    }
};
