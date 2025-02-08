#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void countCharacterFrequency(const std::string& str, std::unordered_map<char, int>& freqMap) {
    for (char ch : str) {
        freqMap[ch]++;
    }
}

void replaceVowels(std::string& str, char replacement) {
    std::string vowels = "aeiouAEIOU";
    for (char& ch : str) {
        if (vowels.find(ch) != std::string::npos) {
            ch = replacement;
        }
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Check if the string is a palindrome
    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    // Count and display the frequency of each character
    std::unordered_map<char, int> freqMap;
    countCharacterFrequency(input, freqMap);
    std::cout << "Character frequencies:" << std::endl;
    for (const auto& pair : freqMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Replace all vowels in the string with a specific character
    char replacement;
    std::cout << "Enter a character to replace all vowels: ";
    std::cin >> replacement;
    replaceVowels(input, replacement);
    std::cout << "String after replacing vowels: " << input << std::endl;

    return 0;
}