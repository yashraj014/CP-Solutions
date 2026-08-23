class Solution {
  public:
    int replaceBit(int n, int k) {
        // code here
        int size = 32 - __builtin_clz(n);
        if(k>size) return n;
        return n & ~(1<<(size-k));
    }
};