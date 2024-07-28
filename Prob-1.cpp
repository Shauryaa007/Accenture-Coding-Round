// sum of odd integers

#include <iostream>
#include <vector>

using namespace std;

int sumOfOddElements(const vector<int>& arr) {
    int sumOdd = 0;
    for (int num : arr) {
        if (num % 2 != 0) {
            sumOdd += num;
        }
    }
    return sumOdd;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int result = sumOfOddElements(arr);
    cout<< result << endl;

    return 0;
}
