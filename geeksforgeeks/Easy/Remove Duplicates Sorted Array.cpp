class Solution:
    def removeDuplicates(self, arr):
        # code here 
        idx=1
        for x in range(1,len(arr)):
            if arr[x]!=arr[x-1]:
                arr[idx]=arr[x]
                idx+=1
        return arr[:idx]
            
            
                