linear_search <- function(data, item) {
  n <- length(data)
  loc <- 0
  
  for (k in 1:n) {
    if (item == data[k]) {
      loc <- k
      break  # Break out of loop if item is found
    }
  }
  
  if (loc == 0) {
    print("Item not found")
  } else {
    print(paste0(loc, " is location of ", item))
  }
}

# Test the function
data <- c(13, 31, 17, 53, 42)
linear_search(data, 53)
