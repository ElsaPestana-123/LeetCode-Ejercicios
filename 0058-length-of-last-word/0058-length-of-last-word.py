class Solution(object):
    def lengthOfLastWord(self, s):
        ultima = s.split()[-1]
        return len(ultima)
        