# FIRST PATTERN MATCHING
def first_pattern_matching(T, P):
    S = len(T)
    R = len(P)
    K = 0
    MAX = S - R  # Maximum value of K
    INDEX = -1

    while K <= MAX:
        for L in range(R):
            if P[L] != T[K+L]:
                break
        else:
            INDEX = K
            break
        K = K + 1
        
    return INDEX

if __name__ == "__main__":
    result = first_pattern_matching('Mirsaid', 'said')
    if result == -1:
        print('Pattern not found!')
    else:
        print(f'Pattern found at index: {result}')
    