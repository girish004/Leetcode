class Solution {
public:
    int reverse(int x) {
        long long int value = 0, rem = 0, res = 0;
        int k = abs(x);
        while (k)
        {
            value *= 10;
            if(value > 2147483647 || value < -2147483648)
                return 0;
            rem = k % 10;
            value += rem;
            k /= 10;
        }
        res = x>0?value:-value;
        return res;
    }
};