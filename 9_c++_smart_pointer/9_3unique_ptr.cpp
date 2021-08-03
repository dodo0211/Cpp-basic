#include <iostream>
#include <memory>

using namespace std;

// 메모리 해제 이후에 객체 접근

int main() {
    int* arr = new int[10];
    unique_ptr<int> p1(arr);
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }
    
    // 동적으로 할당된 값을 모두 해제
    p1.reset();
    cout << '\n';

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }
    
    
}