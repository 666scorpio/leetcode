class Solution:
    def isValid(self, s: str) -> bool:
        self.stack = []
        d = None
        for c in s:
            if c == '[' or c == '(' or c == '{':
                self.stack.append(c)
            elif c == ']' or c == ')' or c == '}':
                if len(self.stack) == 0:
                    return False
                d = self.stack.pop()
                if (d == '[' and c == ']') \
                        or (d == '(' and c == ')') \
                        or (d == '{' and c == '}'):
                    continue
                else:
                    return False
        if len(self.stack) != 0:
            return False
        return True