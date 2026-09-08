class Solution:
    def rotateArr(self, arr, d):
        # code here
        n = len(arr)
        d = d % n
        arr[:] = arr[d:] + arr[:d]