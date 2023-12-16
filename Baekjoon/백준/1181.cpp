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
    std::cin >> n;  // 단어의 개수 입력

    std::vector<std::string> words(n);
    for (int i = 0; i < n; i++) {
        std::cin >> words[i];  // 단어 입력
    }

    std::sort(words.begin(), words.end(), Compare);  // 길이가 짧은 것부터, 길이가 같으면 사전 순으로 정렬

    std::vector<std::string> uniqueWords;
    uniqueWords.push_back(words[0]);  // 첫 번째 단어는 중복되지 않으므로 바로 추가

    for (int i = 1; i < n; i++) {
        if (words[i] != words[i - 1]) {
            uniqueWords.push_back(words[i]);  // 중복된 단어가 아니라면 추가
        }
    }

    for (const std::string& word : uniqueWords) {
        std::cout << word << std::endl;  // 정렬된 단어 출력
    }

    return 0;
}
