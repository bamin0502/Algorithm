#include <iostream>
#include <vector>
#include <algorithm>

bool Compare(const std::string& a, const std::string& b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    }
    return a < b;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> words(n);
    for (int i = 0; i < n; i++) {
        std::cin >> words[i];  
    }

    std::sort(words.begin(), words.end(), Compare);  
    std::vector<std::string> uniqueWords;
    uniqueWords.push_back(words[0]); 
    for (int i = 1; i < n; i++) {
        if (words[i] != words[i - 1]) {
            uniqueWords.push_back(words[i]);  
        }
    }

    for (const std::string& word : uniqueWords) {
        std::cout << word << std::endl;  
    }

    return 0;
}
