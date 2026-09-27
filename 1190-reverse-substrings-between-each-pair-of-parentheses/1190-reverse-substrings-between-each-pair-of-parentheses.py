class Solution:
    def reverseParentheses(self, s: str) -> str:
        stack=[]
        string =""
        for ch in s:
            if ch=="(":
                stack.append(string)
                string=""
            elif ch==")":
                string = stack.pop()+ string[::-1]
            else:
                string+=ch
        return string