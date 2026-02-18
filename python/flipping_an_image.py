from typing import List


class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        for img in image:
            i: int = 0
            l: int = len(img) - 1
            while i <= l:
                img[i], img[l] = img[l], img[i]
                i += 1
                l -= 1
            i = 0
            while i < len(img):
                if img[i] == 0:
                    img[i] = 1
                else:
                    img[i] = 0