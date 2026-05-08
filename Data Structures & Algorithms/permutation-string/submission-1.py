class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s2) < len(s1):
            return False
        
        s1_freq = {}
        for c in s1:
            s1_freq[c] = s1_freq.get(c, 0) + 1
        
        l = 0
        for r in range(len(s1) - 1, len(s2)):
            wnd_freq = {}

            for i in range(l, r + 1):
                wnd_freq[s2[i]] = wnd_freq.get(s2[i], 0) + 1
            
            if s1_freq == wnd_freq:
                return True
            
            l += 1

        return False
