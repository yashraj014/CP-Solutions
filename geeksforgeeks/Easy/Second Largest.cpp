class Solution:
    def getSecondLargest(self, arr):
        # code ere
        smaxi=-1
        
        maxi = max(arr)
        
        for i in range(len(arr)):
            if smaxi<arr[i] and arr[i]<maxi:
                smaxi=arr[i]
            
        return smaxi
                
                