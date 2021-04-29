

class ArrayStack:
    def __init__(self):
        self._data = []
    def len(self):
        return len(self._data)
    def isEmpty(self):
        return len(self._data) == 0
    def push(self, e):
        self._data.append(e)
    def top(self):
        if self.isEmpty():
            return 'Stack is empty.'
        return self._data[-1]
    def pop(self):
        if self.isEmpty():
            return 'Stack is empty.'
        return self._data.pop()


# s = ArrayStack()
# s.push(2)
# s.push(3)
# s.push(4)
# print(s.pop())
# print(s.pop())