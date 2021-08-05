#include <iostream>
#include <set>

using namespace std;

// 원소들 자체가 키로 사용됨
// 정렬된 위치에 데이터를 삽입 -> 검색 속도가 빠르다.

int main() {
    int array[5] = {2, 4, 6, 8, 10};

    set<int> s(array, array+5);
    set<int>::iterator iter = s.begin();

    for(; iter != s.end(); iter++) {
        cout << *iter << '\t';
    }

    cout << '\n';
    s.insert(1);
    s.insert(3);
    s.insert(5);
    iter = s.begin();

    // 오름차순으로 정렬되어 있는 수들이 출력
    for(; iter != s.end(); iter++) {
        cout << *iter << '\t';
    }
    cout << '\n';
}