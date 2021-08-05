#include <iostream>
#include <string>
#include <map>

using namespace std;

// 키와 값이 쌍을 이룬다.
// 정렬된 위치에 데이터를 삽입 -> 검색 속도가 빠르다

int main() {
    map<string, int> m;
    m["허선영"] = 1;
    m["서수정"] = 2;
    m["허준혁"] = 3;

    map<string, int>::iterator iter = m.begin();

    for(; iter != m.end(); iter++) {
        cout << iter->first << ":" << iter->second << '\n';
    }
    m["송훈일"] = 4;
    cout << m["없는 사람"] << '\n';
    iter = m.begin();

    for(; iter != m.end(); iter++) {
        cout << iter->first << ":" << iter->second << '\n';
    }
}