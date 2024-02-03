class Solution:
    def canPlaceFlowers(self, flowerbed, n):
        for i in range(len(flowerbed)):
            if n <= 0:
                break
            if flowerbed[i] == 0:
                prev = flowerbed[i - 1] if i > 0 else 0
                next = flowerbed[i + 1] if i < len(flowerbed) - 1 else 0
                if prev == 0 and next == 0:
                    flowerbed[i] = 1
                    n -= 1
        return n == 0
