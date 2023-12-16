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
    std::cin >> n;  // �ܾ��� ���� �Է�

    std::vector<std::string> words(n);
    for (int i = 0; i < n; i++) {
        std::cin >> words[i];  // �ܾ� �Է�
    }

    std::sort(words.begin(), words.end(), Compare);  // ���̰� ª�� �ͺ���, ���̰� ������ ���� ������ ����

    std::vector<std::string> uniqueWords;
    uniqueWords.push_back(words[0]);  // ù ��° �ܾ�� �ߺ����� �����Ƿ� �ٷ� �߰�

    for (int i = 1; i < n; i++) {
        if (words[i] != words[i - 1]) {
            uniqueWords.push_back(words[i]);  // �ߺ��� �ܾ �ƴ϶�� �߰�
        }
    }

    for (const std::string& word : uniqueWords) {
        std::cout << word << std::endl;  // ���ĵ� �ܾ� ���
    }

    return 0;
}
