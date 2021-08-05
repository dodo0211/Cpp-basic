#include <iostream>
#include <deque>

using namespace std;

// deque: 양 끝에서 데이터를 넣거나 뺄 수 있는 자료구조 (stack + queue의 형태)

int main() {
    deque<int> d;
    d.push_front(3);
    d.push_back(7);
    d.pop_front();
    d.push_front(4);

    for(int i=0; i<d.size(); i++) {
        cout << d[i] << '\t';
    }
    cout << '\n';

    // iterator: 요소를 가르키는 포인터 + 반복을 편리하게 사용 가능
    deque<int>::iterator iter;
    iter = d.begin();

    d.insert(iter + 1, 3, 5);
    iter = d.begin();
    d.insert(iter + 1, 1, 9);

    for(int i=0; i<d.size(); i++) {
        cout << d[i] << '\t';
    }
    cout <<'\n';
    d.clear();
    cout << d.empty() << '\n';
}