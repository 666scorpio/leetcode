from typing import List


class Solution:
    def shiftingLetters(self, s: str, shifts: List[int]) -> str:
        s = list(s)
        i = len(s) - 1
        total = 0
        while i >= 0:
            total += shifts[i]
            index = ord(s[i]) - ord('a')
            s[i] = chr((index + total) % 26 + ord('a'))
            i -= 1
        return ''.join(s)