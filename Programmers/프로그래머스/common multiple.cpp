#include <iostream>
using namespace std;

int solution(int number, int n , int m){
    return (number % n == 0 && number % m == 0) ? 1:0;
}
int main() {
    int number, n, m;
    cout << "세 정수를 입력하세요 (number, n, m): ";
    cin >> number >> n >> m;
    
    cout << "결과: " << solution(number, n, m) << endl;
    return 0;
}
