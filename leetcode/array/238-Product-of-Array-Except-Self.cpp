class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>proFix(n+1);
        int product =1;
        proFix[0]=1;
        for(int i=1;i<n+1;i++){
            product*=nums[i-1];
            proFix[i]=product;
        }

        vector<int>proSuf(n+1);
        product=1;
        proSuf[n]=1;
        for(int i=n-1;i>=0;i--){
            product*=nums[i];
            proSuf[i]=product;
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=proFix[i]*proSuf[i+1];
        }

        return ans;
    }
};