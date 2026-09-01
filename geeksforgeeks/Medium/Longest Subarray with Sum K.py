class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
       unordered_map<int,int>mpp;
       int maxi =0;
    //   mpp[0]=0;
       int n = arr.size();
       int sum=0;
       
       for(int i=0;i<n;i++){
           sum+=arr[i];
           if (sum == k) { maxi = max(maxi, i + 1); }
           if(mpp.find(sum-k)!=mpp.end()){
               maxi = max(maxi,i-mpp[sum-k]);
           }
           
          if (mpp.find(sum) == mpp.end()) { mpp[sum] = i; }
       }
       
       return maxi;
       
    }
};