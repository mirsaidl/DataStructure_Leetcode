#include <iostream>
using namespace std;

int main() {
    string T = "aabaabbba"; 
    string P = "abb"; 
    int S = T.size();
    int R = P.size(); 
    int K = 1;
    int MAX = S - R + 1; // Maximum value of K
    int INDEX = 0; 

    while (K <= MAX) {
        int L;
        for (L = 0; L < R; L++) {
            if (P[L] != T[K + L - 1]) {
                break; // If characters don't match, exit loop
            }
        }
        if (L == R) { //If loop completes without breaking, pattern found
            INDEX = K; // Update INDEX
            break; // Exit loop
        }
        K++; // Increment K
    }

    if (INDEX != 0) 
        cout << "Pattern found at index: " << INDEX << endl;
    else 
        cout << "Pattern not found" << endl;
    
    return 0;
}