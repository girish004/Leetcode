class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n = envelopes.size();
        if(n==0)return 0;
        sort(envelopes.begin(),envelopes.end());

        vector<int> v(envelopes.size(),1);
        for(int i=1;i<envelopes.size();i++)
        {
            for(int j=0;j<i;j++)
            if(envelopes[j][0]<envelopes[i][0] && envelopes[j][1]<envelopes[i][1])
            {
                v[i]=max(v[i],v[j]+1);
            }
        }
        return *max_element(v.begin(),v.end());
    }
};