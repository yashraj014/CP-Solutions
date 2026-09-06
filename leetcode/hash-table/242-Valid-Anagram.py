class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t) :
            return False
        mpp = {}

        for i in range(len(s)):
            mpp[s[i]]=mpp.get(s[i],0)+1
            mpp[t[i]]=mpp.get(t[i],0)-1
        
        for val in mpp.values():
            if val!=0:
                return False
        return True

    
        