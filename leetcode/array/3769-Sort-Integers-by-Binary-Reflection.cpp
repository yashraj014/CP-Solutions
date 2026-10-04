class Solution {
public:
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(auto& it:nums){
            int n = it;
            int m=0;
            while(n){
                m  =  m | (1 & n);
                if(n/2)
                m=m<<1;
                n=n>>1;
               
            }

            v.push_back({m,it});
            
        }
        vector<int>ans(nums.size());
        sort(v.begin(),v.end());
        for(int i=0;i<nums.size();i++){
            ans[i]=v[i].second;
        }
        return ans;
    }
};