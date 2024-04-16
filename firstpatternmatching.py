# FIRST PATTERN MATCHING
def main():
    T = "Mirsaid"
    P = "said"
    S = len(T)
    R = len(P)
    K = 1
    MAX = S - R + 1  # Maximum value of K
    INDEX = 0

    while K <= MAX:
        L = 0
        while L < R:
            if P[L] != T[K + L - 1]:
                break  # If characters don't match, exit loop
            L += 1
        if L == R:  # If loop completes without breaking, pattern found
            INDEX = K  # Update INDEX
            break 
        K += 1 

    if INDEX != 0:
        print("Pattern found at index:", INDEX)
    else:
        print("Pattern not found")

if __name__ == "__main__":
    main()