#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
public:
// 매개변수가 다른 동일한 이름의 생성자 2개 (overloading)

    // 매개변수가 없을 때
    Person() {name = "송훈일";}
    // 매개변수가 있을 때
    Person(string name): name(name) { }
    void showName() {cout << "이름: " << name << '\n';}
};

int main() {
    Person person1;
    person1.showName();

    Person person2("허선영");
    person2.showName();
}