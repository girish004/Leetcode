class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> m;
        vector <int> v;
        int i;
        for(i=0;i<nums.size();i++)
        {
            int a=target-nums[i];
            if(m.count(a))
            {
                v.push_back(m[a]);
                v.push_back(i);
                break;
            }
            else
            {
                m[nums[i]]=i;
            }
        }
        return v;
    }
};
