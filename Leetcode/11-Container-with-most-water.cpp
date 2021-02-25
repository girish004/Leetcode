class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0,l=0,r=height.size()-1;
        while(l<r)
        {
            int side=0;
            height[l]>height[r]?side=height[r]:side=height[l];
            max=max<(r-l)*side?(r-l)*side:max;
            height[l]<height[r]?l++:r--;
        }
        return max;
    }
};