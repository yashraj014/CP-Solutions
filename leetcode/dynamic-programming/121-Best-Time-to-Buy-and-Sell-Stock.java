class Solution {
    public int maxProfit(int[] prices) {
        int maxProfit = 0;
        int mini=prices[0];
        int maxi = prices[0];
        for(int i=1;i<prices.length;i++){
            if(prices[i]<mini){
                mini=prices[i];
            
            }
            if(prices[i]-mini>maxProfit){
                maxi=prices[i];
                maxProfit=maxi-mini;
            }
        }
        return maxProfit;
    }
}