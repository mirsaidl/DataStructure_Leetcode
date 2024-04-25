def infix_to_postfix(infix):
    precedence = {'+': 1, '-': 1, '*': 2, '/': 2, '^': 3}
    stack = []
    postfix = ''
    
    for char in infix:
        if char.isalnum():
            postfix += char
        elif char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                postfix += stack.pop()
            stack.pop()  # Discard the '('
        else:  # Operator
            while stack and stack[-1] != '(' and precedence.get(stack[-1], 0) >= precedence.get(char, 0):
                postfix += stack.pop()
            stack.append(char)
    
    while stack:
        postfix += stack.pop()
    
    return postfix

# Example usage:
infix_expr = "a + b * (c - d)"
print("Infix expression:", infix_expr)
print("Postfix expression:", infix_to_postfix(infix_expr))
