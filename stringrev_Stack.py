from collections import deque

stack = deque()

class Stack:
    def __init__(self):
        self.container = deque()

    def push(self, val):
        self.container.append(val)

    def pop(self):
        return self.container.pop()

    def peek(self):
        return self.container[-1]

    def is_empty(self):
        return len(self.container) == 0

    def size(self):
        return len(self.container)

def reverse_string(string_here):
    stack = Stack()
    rev = ""
    for ch in string_here:
        stack.push(ch)

    while not stack.is_empty():
        rev += stack.pop()

    return rev

if __name__ == "__main__":
    string_data = "reverse this String"
    print(reverse_string(string_data))