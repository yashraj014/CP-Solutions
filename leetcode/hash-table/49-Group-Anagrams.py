from collections import defaultdict
from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        mpp=defaultdict(list)

        for s in strs:

            sorted_key = "".join(sorted(s))

            mpp[sorted_key].append(s)

        return list(mpp.values())

        