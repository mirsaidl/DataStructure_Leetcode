bubble_sort <- function(arr) {
  n <- length(arr)
  
  for (i in 1:(n-1)) {
    for (j in 1:(n-i)) {
      if (arr[j] > arr[j+1]) {
        # Swap arr[j] and arr[j+1]
        temp <- arr[j]
        arr[j] <- arr[j+1]
        arr[j+1] <- temp
      }
    }
  }
  
  return(arr)
}

# Test the function
arr <- c(64, 34, 25, 12, 22, 11, 90)
sorted_arr <- bubble_sort(arr)
print(paste("Sorted array is:", paste(sorted_arr, collapse = ", ")))