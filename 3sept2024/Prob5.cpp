#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string findLargestWord(const string &input) {
    string largestWord;
    string word;
    stringstream ss(input); // Create a stringstream to split the input string

    // Split the string by '.' and find the largest word
    while (getline(ss, word, '.')) {
        if (word.length() > largestWord.length()) {
            largestWord = word; // Update the largest word if the current word is longer
        }
    }

    return largestWord;
}

int main() {
    string input;
    getline(cin, input);

    string largestWord = findLargestWord(input);
    cout << largestWord.size() << endl;

    return 0;
}