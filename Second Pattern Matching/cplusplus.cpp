#include <iostream>
#include <vector>
#include <string>

std::vector<int> computePrefixFunction(const std::string& pattern) {
    int m = pattern.size();
    std::vector<int> pi(m);
    int k = 0;
    for (int q = 1; q < m; ++q) {
        while (k > 0 && pattern[k] != pattern[q]) {
            k = pi[k - 1];
        }
        if (pattern[k] == pattern[q]) {
            ++k;
        }
        pi[q] = k;
    }
    return pi;
}

int kmpSearch(const std::string& text, const std::string& pattern) {
    int n = text.size();
    int m = pattern.size();
    std::vector<int> pi = computePrefixFunction(pattern);
    int q = 0;
    int index = 0;

    while (q < n) {
        if (pattern[index] == text[q]) {
            ++index;
            ++q;
            if (index == m) {
                return q - m;  // Pattern found at index q - m
            }
        } else {
            if (index != 0) {
                index = pi[index - 1];
            } else {
                ++q;
            }
        }
    }
    return -1;  // Pattern not found
}

int main() {
    std::string text = "abacababbacababcabab";
    std::string pattern = "abba";
    int result = kmpSearch(text, pattern);
    if (result != -1) {
        std::cout << "Pattern found at index " << result << std::endl;
    } else {
        std::cout << "Pattern not found" << std::endl;
    }
    return 0;
}
