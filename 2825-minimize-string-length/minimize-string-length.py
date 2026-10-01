class Solution:
    def minimizedStringLength(self, s: str) -> int:
        k=""
        for i in s:
            if i in k:
                pass
            else:
                k+=i
        n=len(k)
        return n
