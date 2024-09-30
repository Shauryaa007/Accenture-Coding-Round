#include <iostream>
#include <unordered_map>
#include <algorithm>

std::unordered_map<char, int> findMaxCharacterCount(const std::string& str) {
	std::unordered_map<char, int> countMap;

	// Count occurrences of each character
	for (char ch : str) {
		countMap[ch]++;
	}

	// Find the character with the maximum count
	char maxChar = '\0';
	int maxCount = 0;

	for (const auto& entry : countMap) {
		if (entry.second > maxCount) {
			maxChar = entry.first;
			maxCount = entry.second;
		}
	}

	std::unordered_map<char, int> result;
	result[maxChar] = maxCount;
	return result;
}

int main() {
	std::string str = "geeksforgeeks";

	// Call the function and print the result
	std::unordered_map<char, int> result = findMaxCharacterCount(str);
	std::cout << "Character: " << result.begin()->first << ", Count: " << result.begin()->second << std::endl;

	return 0;
}
