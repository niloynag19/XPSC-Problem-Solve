#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Length of strings
        cin >> N;

        string A, B;
        cin >> A >> B;

        int common_ones = 0; // Both A[i] and B[i] are '1'
        int total_ones = 0;  // Total number of '1's in A and B

        for (int i = 0; i < N; i++) {
            if (A[i] == '1' && B[i] == '1') {
                common_ones++;
            }
            if (A[i] == '1' || B[i] == '1') {
                total_ones++;
            }
        }

        // Check if we can make the score odd
        if (total_ones % 2 == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
