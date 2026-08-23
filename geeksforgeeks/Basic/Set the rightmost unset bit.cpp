class Solution {
  public:
    int setBit(int n) {
        // code here
        int i=0;
        while(true){
            if((n & (1<<i))==0){
                return n | (1<<i);
            }
            i++;
        }
        return 0;
    }
};