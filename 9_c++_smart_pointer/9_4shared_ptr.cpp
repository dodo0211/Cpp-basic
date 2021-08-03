#include <iostream>

using namespace std;

// 하나의 특정한 객체를 참조하는 스마트 포인터의 개수가 몇개인지

int main() {
    int* arr = new int [10];

    shared_ptr<int> p1(arr);
    cout << p1.use_count() << '\n';     // 참조하는 스마트 포인터의 개수: 1

    shared_ptr<int> p2(p1);
    cout << p1.use_count() << '\n';     // 참조하는 스마트 포인터의 개수: 2

    shared_ptr<int> p3 = p2;
    cout << p1.use_count() << '\n';     // 참조하는 스마트 포인터의 개수: 3

    p1.reset();
    p2.reset();
    p3.reset();

    cout << p1.use_count() << '\n';     // 참조하는 스마트 포인터의 개수: 0
}