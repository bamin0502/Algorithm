#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string n;
    std::cin >> n;  
    std::sort(n.begin(), n.end(), std::greater<char>());  
    std::cout << n << std::endl;

    return 0;
}