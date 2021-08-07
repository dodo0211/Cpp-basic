#include <iostream>

using namespace std;

int main() {
    int a = 7, b = 0;
    // 에러가 날 수 있는 상황
    try {
        if(b == 0) {
            throw "0으로 나눌 수 없습니다.";
        }
        cout << a/b << '\n';
    }
    // 예외에 대한 대처
    catch(const char* str) {
        cout << str << '\n';
    }
    
}