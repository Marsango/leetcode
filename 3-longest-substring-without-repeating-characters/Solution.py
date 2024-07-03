class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sub_string = ''
        biggest_sub_string = ''
        for j in range(len(s)):
            char = s[j]
            if char not in sub_string:
                sub_string += f'{char}'
            else:
                if len(sub_string) > len(biggest_sub_string):
                    biggest_sub_string = sub_string
                sub_string += char
                sub_string = sub_string[sub_string.find(char) + 1:]
            if j == (len(s) - 1):
                if len(sub_string) > len(biggest_sub_string):
                    biggest_sub_string = sub_string
        return len(biggest_sub_string)