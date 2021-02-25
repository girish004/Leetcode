class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); 
        vector<int> lis(n,1);
        for(int i=1;i<n;i++)
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0)
                    lis[i]= max(lis[i], 1+lis[j]);
            }
        int max_index=0;
        for(int i=0;i<n;i++){
            if(lis[i]>lis[max_index])
                max_index = i;
        }
        vector<int> ans; 
        int temp_val = nums[max_index]; 
        int count = lis[max_index];  
        for(int i= max_index;i>=0;){
            if(temp_val%nums[i]==0 && count==lis[i]){
                ans.push_back(nums[i]);
                temp_val = nums[i];
                count--;
            }
            i--;
        }
        return ans;
    }
};