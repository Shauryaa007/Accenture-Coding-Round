
#include <iostream>
#include <vector>
using namespace std;

// Function to find the minimum value of K
int findMinimumK(const vector<vector<int>>& mat) {
    int n = mat.size(); // Size of the NxN matrix

    // Iterate through each index to check for the condition
    for (int k = 0; k < n; ++k) {
        bool rowCheck = true, colCheck = true;

        // Check the K-th row excluding (k, k)
        for (int j = 0; j < n; ++j) {
            if (j != k && mat[k][j] != 0) {
                rowCheck = false;
                break;
            }
        }

        // Check the K-th column excluding (k, k)
        for (int i = 0; i < n; ++i) {
            if (i != k && mat[i][k] != 0) {
                colCheck = false;
                break;
            }
        }

        // If both row and column check pass, return the current K
        if (rowCheck && colCheck) {
            return k; // Return the first K that satisfies the condition
        }
    }

    return -1; // If no such K exists, return -1
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> matrix(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Find the minimum K
    int result = findMinimumK(matrix);

    cout<<result;

    return 0;
}
