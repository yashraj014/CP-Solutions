class Solution {
  public:
    int toggleBits(int n, int l, int r) {
        // code here
        int result = 0;
        while(l<=r){
            result|=(1<<(l-1));
            l++;
        }
        return n ^(result);
    }
};