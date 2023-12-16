#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string n;
    std::cin >> n;  // 수 입력
    std::sort(n.begin(), n.end(), std::greater<char>());  // 내림차순으로 정렬
    std::cout << n << std::endl;

    return 0;
}