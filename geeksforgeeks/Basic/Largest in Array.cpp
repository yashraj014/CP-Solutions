class Solution:
    def largest(self, arr):
        # code here
        maxi=-1;
        for i in arr:
            if maxi<i:
                maxi=i;
        
        return maxi;
