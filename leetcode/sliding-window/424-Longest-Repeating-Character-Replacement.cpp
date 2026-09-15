class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int n=s.size();
        int l=0,r=0;
        int max_count=0;
        int ans=0;
        while(r<n){
            freq[s[r]-'A']++;
            max_count = max(max_count,freq[s[r]-'A']);
            while((r-l+1)-max_count>k){
                freq[s[l]-'A']--;
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};