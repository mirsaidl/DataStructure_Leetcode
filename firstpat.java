public class Main {
    public static void main(String[] args) {
        String T = "aabaabbba";
        String P = "abb";
        int S = T.length();
        int R = P.length();
        int K = 1;
        int MAX = S - R + 1; // Maximum value of K
        int INDEX = 0;

        while (K <= MAX) {
            int L = 0;
            while (L < R) {
                if (P.charAt(L) != T.charAt(K + L - 1)) {
                    break; // If characters don't match, exit loop
                }
                L++;
            }

            if (L == R) { // If loop completes without breaking, pattern found
                INDEX = K; // Update INDEX
                break; // Exit loop
            }
            K++; // Increment K
        }

        if (INDEX != 0) {
            System.out.println("Pattern found at index: " + INDEX);
        } else {
            System.out.println("Pattern not found");
        }
    }
}
