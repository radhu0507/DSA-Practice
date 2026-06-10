class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        h = set()
        l = a = 0
        for r in range(len(s)):
            while s[r] in h:
                h.remove(s[l])
                l += 1
            h.add(s[r])
            a = max(a, r - l + 1)
        return a
