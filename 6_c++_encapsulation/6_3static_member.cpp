#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
public:
    static int count;
    Person(string name) : name(name) {
        count++;
    }
};

// static 접근 ::
int Person::count = 0;

int main() {
    Person p1("허선영");
    Person p2("서수정");
    Person p3("송훈일");
    cout << "사람의 수: " << Person::count << '\n';
}