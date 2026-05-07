class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s2) < len(s1):
            return False
        
        l = 0
        r = len(s1) - 1
        s1_freq = Counter(s1)

        while r < len(s2):
            window_freq = Counter(s2[l : r + 1])

            if s1_freq == window_freq:
                print(s1_freq)
                print(window_freq)
                return True
            else:
                r += 1
                l += 1
        
        return False
