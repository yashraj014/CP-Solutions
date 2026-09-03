class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        int n = arr.size();
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            
        }
        int minCost = 0;
        while(!pq.empty()){
            
            if(pq.size()==1) break;
             
            int sum = pq.top();
            pq.pop();
            sum+=pq.top();
            pq.pop();
            minCost+=sum;
            pq.push(sum);
        }
        return minCost;
    }
};