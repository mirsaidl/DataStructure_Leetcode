class Stack:
    def __init__(self):
        self.items = []
    
    def push(self, item):
        self.items.append(item)
    
    def size(self):
        return len(self.items)
    
    def is_empty(self):
        return len(self.items) == 0
    
    def __call__(self):
        print(self.items)
    
    def pop(self):
        if not self.is_empty():
            return self.items.pop()
        else:
            print("Stack Underflow")

    def top(self):
        if not self.is_empty():
            return self.items[-1]
        else:
            print("Stack is empty")

stack = Stack()

stack.push(10)
stack.push(20)
stack.push(100)
stack.push(1000)

print(f'Size: {stack.size()}')
stack.pop()
print(f"Top element: {stack.top()}")
print(f"Is empty: {stack.is_empty()}")
print(f"STACK elements: {stack.items}")
