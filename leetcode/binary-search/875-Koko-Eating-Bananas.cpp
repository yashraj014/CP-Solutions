class Solution {
public:
    bool check(vector<int>&piles,int mid,int h){
        int count=0;
        for(int i=0;i<piles.size();i++){
            count+=(piles[i]+mid-1)/mid;
        }

        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;

        int high = *max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){
            int mid = high - (high-low)/2;

            if(check(piles,mid,h)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};