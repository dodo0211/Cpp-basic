#include <iostream>
#include <memory>

using namespace std;

// 소유권 이전과 메모리 할당 예제

int main() {
    // 10을 int형으로 동적 할당
    unique_ptr<int> p1(new int(10));
    unique_ptr<int> p2;
    
    cout << "스마트 포인터 1: " << p1 << '\n';
    cout << "스마트 포인터 2: " << p2 << '\n';
    cout << "--- \n소유권 이전 ---\n";

    p2 = move(p1);      // 소유권 이전
    cout << "스마트 포인터 1: " << p1 << '\n';
    cout << "스마트 포인터 2: " << p2 << '\n';
    cout << "--- \n메모리 할당 해제 ---\n";

    p2.reset();     // 메모리 할당 해제
    cout << "스마트 포인터 1: " << p1 << '\n';
    cout << "스마트 포인터 2: " << p2 << '\n';
}