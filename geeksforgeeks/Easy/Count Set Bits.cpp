class Solution {
  public:
    int setBits(int n) {
        // Code here
        return __builtin_popcountl(n);
    }
};