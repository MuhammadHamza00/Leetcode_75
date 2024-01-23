class Solution(object):
    def mergeAlternately(self, word1, word2):
        new_str = ""
        ptr1 = 0
        ptr2 = 0

        while ptr1 < len(word1) and ptr2 < len(word2):
            new_str += word1[ptr1]
            ptr1 += 1
            new_str += word2[ptr2]
            ptr2 += 1

        while ptr1 < len(word1):
            new_str += word1[ptr1]
            ptr1 += 1

        while ptr2 < len(word2):
            new_str += word2[ptr2]
            ptr2 += 1

        return new_str