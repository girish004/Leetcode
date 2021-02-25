class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size();
        int i=-1;
        while(++i<--j)
        {
            swap(s[i],s[j]);//swapping using algorithm header
        }
    }
};
