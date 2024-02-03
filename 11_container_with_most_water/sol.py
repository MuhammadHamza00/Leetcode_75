class Solution:
    def maxArea(self, height: list[int]) -> int:
        i = 0
        j = len(height) - 1
        current = 0
        result = 0

        while i < j:
            current = min(height[i], height[j]) * (j - i)
            result = max(current, result)

            if height[i] < height[j]:
                i += 1
            else:
                j -= 1

        return result
