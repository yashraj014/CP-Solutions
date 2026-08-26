class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack<int>st;
        stack<int>st2;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        vector<int>ans(n);
        int k=n-1;
        while(!st.empty()){

            
            while(!st2.empty() && temp[st2.top()]<=temp[st.top()]){
                st2.pop();
            }
            if(st2.empty()) ans[k]=0;
            else ans[k]=st2.top()-k;
            st2.push(st.top());
            st.pop();
            
            k--;
        }
        return ans;
    }
};