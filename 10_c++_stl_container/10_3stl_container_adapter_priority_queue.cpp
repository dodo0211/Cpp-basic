#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n, x;
    cout << "몇 개의 숫자인지 입력하세요(입력 후 줄바꿈):" << endl;
    cin >> n;

    // 우선순위 queue5
    priority_queue<int> pq;
    cout << n << "개의 숫자를 입력하세요(띄어쓰기로 구분):" << endl;
    for(int i=0; i<n; i++) {
        cin >> x;
        pq.push(x);
    }

    // 큰 수부터 출력
    while (!pq.empty()) {
        cout << pq.top() << '\n';
        pq.pop();
    }
    
}