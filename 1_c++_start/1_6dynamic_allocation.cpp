#include <iostream>
#define SIZE 100

using namespace std;

int *arr;

int main() {
    //동적 할당
    arr = new int[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << '\n';
    }

    // 할당 해제
    delete arr;
}