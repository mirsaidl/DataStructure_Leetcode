from linkedlist import print_linked_list

# LinkedList class node
class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None
        
def insert_last(head, value):
    newnode = Node(value)
    temp = head
    while temp.next != None:
        temp = temp.next
    temp.next = newnode
    
    return temp
    
def insert_first(head, value):
    newnode = Node(value)
    newnode.next = head
    return newnode

def insert(head,key,value):
    newnode = Node(value)
    temp = head
    while(temp.next != None):
        if temp.data == key:
            newnode.next = temp.next
            temp.next = newnode
            return head
        else:
            temp = temp.next
    return head

head = Node(100)
one = Node(453)
two = Node(55)
three = Node(2344)
four = Node(21)
five = Node(234)
tail = Node(42)


head.next = one
one.next = two
two.next = three
three.next = four
four.next = five
five.next = tail
tail.next = None

print_linked_list(head)
insert_last(head, 90)
print_linked_list(head)
head = insert_first(head, 500)
print_linked_list(head)
insert(head, 2344, 884)
print_linked_list(head)
