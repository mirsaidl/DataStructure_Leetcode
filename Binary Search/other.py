data = [1,34,56,76,89,99]
item = 56

def binary_search(data, item):
    beg = 0
    end = len(data)
    loc = -1

    while beg <= end:
        mid = int((beg+end)/2)
        
        if data[mid] == item:
            loc = mid
            
        if item < data[mid]:
            end = mid - 1
        
        else:
            beg = mid + 1
    
    return loc

location = binary_search(data, item)
print(location)
    

    