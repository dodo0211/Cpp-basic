#include <iostream>
#include <stack>

using namespace std;

int main() {
    // template
    stack<int> s;

    s.push(7);
    s.push(5);
    s.push(4);
    s.pop();
    s.push(6);
    s.pop();

    // empty가 아닐때 까지
    while (!s.empty()) {
        cout << s.top() << '\n';
        s.pop();
    }
    
}