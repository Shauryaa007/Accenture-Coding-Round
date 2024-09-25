#include <iostream>
#include <string>
using namespace std;

int longestSubstringWithoutDot(const string& input) {
    int maxLength = 0;
    int currentLength = 0;

    for (char ch : input) {
        if (ch != '.') {
            currentLength++;
        } else {
            // If a dot is encountered, update maxLength and reset currentLength
            maxLength = max(maxLength, currentLength);
            currentLength = 0;
        }
    }

    // Make sure to check one last time in case the longest substring is at the end
    maxLength = max(maxLength, currentLength);

    return maxLength;
}

int main() {
    string input = "abc.aa.bbaace";
    
    int result = longestSubstringWithoutDot(input);
    cout << "The length of the longest substring without interruptions is: " << result << endl;

    return 0;
}
