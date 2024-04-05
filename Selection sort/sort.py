def findSmallest(list):
    min = list[0]
    index = 0
    for i in range(len(list)):
        if list[i] < min:
            min = list[i]
            index = i
    return index

def selectionSort(list):
    new_list = []
    for i in range(len(list)):
        smallest = findSmallest(list)
        new_list.append(list.pop(smallest))
    return new_list
    
arr = [44,3,-76,96,44]
print(selectionSort(arr))
