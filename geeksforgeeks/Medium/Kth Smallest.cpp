class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto& it:arr){
            pq.push(it);
        }
        
        while(!pq.empty()){
            k--;
            if(k==0) return pq.top();
            
            pq.pop();
            
        }
        return 0;
    }
};