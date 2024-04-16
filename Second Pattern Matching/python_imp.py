def compute_prefix_function(pattern):
    m = len(pattern)
    pi = [0] * m
    k = 0
    for q in range(1, m):
        while k > 0 and pattern[k] != pattern[q]:
            k = pi[k - 1]
        if pattern[k] == pattern[q]:
            k += 1
        pi[q] = k
    return pi

def search(text, pattern):
    n = len(text)
    m = len(pattern)
    pi = compute_prefix_function(pattern)
    q = 0
    index = 0

    while q < n:
        if pattern[index] == text[q]:
            index += 1
            q += 1
            if index == m:
                return q - m  # Pattern found at index q - m
        else:
            if index != 0:
                index = pi[index - 1]
            else:
                q += 1

    return -1  # Pattern not found


if __name__ == "__main__":
    text = "abacababbacababcabab"
    pattern = "abba"
    result = search(text, pattern)
    if result != -1:
        print(f"Pattern found at index {result}")
    else:
        print("Pattern not found")
