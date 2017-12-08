class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        prev_length = 0
        length = 0
        i = 0
        his = set("")
        while(i<len(s)):
            for j in range(i, len(s)):
                if(s[j] not in his):
                    length = length + 1;
                    his.add(s[j])
                else:
                    his = set("")
                    break;
            if(length > prev_length):
                prev_length = length
                result = s[i : i+prev_length]
            i = i + 1
            length = 0
        return prev_length