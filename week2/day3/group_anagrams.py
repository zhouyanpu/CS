class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        m = {}   
        for ea in strs: 
            q= list(ea)
            q.sort()
            t = tuple(q)
            if t in m:
                m.get(t).append(ea)
            else:
                m[t]=[ea]
        return m.values()
