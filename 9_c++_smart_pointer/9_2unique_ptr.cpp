#include <iostream>
#include <memory>

using namespace std;

// 객체에 접근
// 기본적인 포인터와 동일

int main() {
    unique_ptr<int> p1(new int(10));
    cout << *p1 << '\n';        // 관리하고 있는 객체를 반환
}