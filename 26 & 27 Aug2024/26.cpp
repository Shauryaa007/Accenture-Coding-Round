#include <bits/stdc++.h>

using namespace std;

// Function to find the longest common suffix between two words
int longestCommonSuffix(const string& word1, const string& word2) {
    int i = word1.size() - 1;
    int j = word2.size() - 1;
    int length = 0;

    // Compare the words from the end
    while (i >= 0 && j >= 0 && word1[i] == word2[j]) {
        length++;
        i--;
        j--;
    }

    return length;
}

// Function to find the word that rhymes the most with the given word
string findBestRhymingWord(const vector<string>& arr, const string& input) {
    string bestWord = "";
    int maxSuffixLength = 0;

    for (const auto& word : arr) 
    {
        int currentSuffixLength = longestCommonSuffix(word, input);

        // Check if the current word has a longer suffix or if it's equal but has                fewer characters
        
        if (currentSuffixLength > maxSuffixLength || 
           (currentSuffixLength == maxSuffixLength && word.size() < bestWord.size()))         {
            bestWord = word;
            maxSuffixLength = currentSuffixLength;
        }
    }

    return bestWord;
}

int main() {
    int n;
    cin>>n;
    vector<string> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
    
    string input;
    cin>>input;

    string result = findBestRhymingWord(arr, input);

    cout<< result << endl;

    return 0;
}

/*
4
gender blender blunder under
thunder
*/
