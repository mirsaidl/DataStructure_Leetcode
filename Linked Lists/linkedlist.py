class Node:
    def __init__(self, data=None):
        self.data = data
        self.before = None
        self.next = None

def print_linked_list(head):
    """
        Prints Linked List .
        Parameters:
          **head** <- gets head of the Linked List
    """
    temp = head
    while (temp != None):
        print(f"{temp.data}->", end=' ')
        temp = temp.next
    print('NULL')
    
def print_linked_list_with_before(tail):
    temp = tail
    while (temp != None):
        print(f"{temp.data}->", end=' ')
        temp = temp.before
    print('NULL')

head = Node()
one = Node()
two = Node()
three = Node()
four = Node()

head.data = 70
one.data = 60
two.data = 10
three.data = 20
four.data = 5

head.next = one
one.next = two
two.next = three
three.next = four
four.next = None

head.before = None
one.before = head
two.before = one
three.before = two
four.before = three 

print_linked_list(head)
print_linked_list_with_before(four)





