def bubble_sort(arr):
    n = len(arr)
    for k in range(n):
        for ptr in range(0, n - k - 1):
            # Swap if the element found is greater
            if arr[ptr] > arr[ptr+1]:
                arr[ptr], arr[ptr+1] = arr[ptr+1], arr[ptr]
    return arr


if __name__ == "__main__":
   my_data = [64, 34, 25, 12, 22, 90, 1]
   print("Before sorting:", my_data)
   sorted_data = bubble_sort(my_data)
   print("After sorting:", sorted_data)
    
        