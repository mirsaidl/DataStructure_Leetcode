def binary_search (list,item):
    low = 0
    high = len(list) - 1

    while low <= high:
        mid = (low + high) / 2
        mid = int(mid)
        guess = list[mid]
        

        if guess == item:
            return mid
        if guess > item:
            high = mid - 1
        else:
            low = mid + 1
        
    return None



mylist = [1,4,5,6,7,8 ,9 ,20]
mylist2 = [1,6,7,98]

print(binary_search(mylist, 9))
print(binary_search(mylist2, 56))