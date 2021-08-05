#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(8);

    vector<int>::iterator iter;
    iter = v.begin();
    // iterator(=3) 뒤에 7을 size 3만큼
    v.insert(iter + 1, 3, 7);

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << '\t';
    }
    cout << '\n';
    v.clear();
    cout << v.empty();
}