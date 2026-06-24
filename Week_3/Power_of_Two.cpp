class Solution {
public:
    bool isPowerOfTwo(int n) {
        // A power of two must be strictly greater than 0.
        // If it is a power of two, its binary representation has exactly one bit set to 1.
        // Therefore, n & (n - 1) will clear that single bit and equal 0.
        return n > 0 && (n & (n - 1)) == 0;
    }
};