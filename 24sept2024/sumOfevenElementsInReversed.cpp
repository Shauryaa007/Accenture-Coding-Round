#include <iostream>
#include <vector>
using namespace std;

int sumOfEvenIndexInReversedArray(const vector<int>& arr) {
    int sum = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int Ridx=n - 1 - i;
        if (Ridx % 2 == 0) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    // Example array
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    int result = sumOfEvenIndexInReversedArray(arr);
    cout << "Sum of elements at even indices in the reversed array: " << result << endl;

    return 0;
}
