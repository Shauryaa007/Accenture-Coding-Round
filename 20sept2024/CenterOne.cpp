// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

const int N = 5;

// Function to return the
// minimum moves required
int minMoves(int mat[N][N])
{

	// Center of the matrix
	int cI = N / 2, cJ = N / 2;

	// Find the position of the 1
	int oneI = 0, oneJ = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (mat[i][j] == 1) {
				oneI = i;
				oneJ = j;
				break;
			}
		}
	}

	return (abs(cI - oneI) + abs(cJ - oneJ));
}

// Driver code
int main()
{
	int mat[N][N] = { { 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 0, 0, 0 },
					{ 0, 0, 1, 0, 0 } };

	cout << minMoves(mat);

	return 0;
}
