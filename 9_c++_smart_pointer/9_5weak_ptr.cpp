#include <iostream>

using namespace std;

// weak_ptr은 shared_ptr 객체가 참조하고 있는 객체에 접근 가능
// 하지만 해당 객체의 소유자의 수에는 포함되지 않는 스마트 포인터

// 서로가 상대방을 가르키는 shared_ptr은 참조 횟수가 0이 될 수 없으므로 메모리에서 해제가 불가능
//      -> weak_ptr은 순환 참조(circular reference) 현상을 제거하기 위한 목적으로 사용 가능 

int main() {
    int* arr = new int(1);
    shared_ptr<int> sp1(arr);
    weak_ptr<int> wp = sp1;     // wp는 참조 횟수 계산에서 제외한다.

    cout << sp1.use_count() << '\n';        // 1로 동일하다.
    cout << wp.use_count() << '\n';

    if(true) {
        shared_ptr<int> sp2 = wp.lock();        // shared_prt 포인터 반환
        cout << sp1.use_count() << '\n';        // 2
        cout << wp.use_count() << '\n';         // 2
    }

    // scope를 벗어나므로 sp2가 해제된다.
    cout << sp1.use_count() << '\n';    //1
    cout << wp.use_count() << '\n';     //1
}