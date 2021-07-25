#include <iostream>
#include <string>

using namespace std;

// Parent Class
class Person {
private:
    string name;

public:
    // member field init :name(name)
    Person(string name) : name(name) { }

    string getName() {
        return name;
    }

    void showName() {
        cout << "이름: " << getName() << '\n';
    }
};

// Parent Class
class Temp {
public:
    void showTemp() {
        cout << "임시 부모 클래스이다. \n";
    }
};

// Child Class
// multipple inheritance
// Temp 앞에 접근 제한자가 없으면 함수를 불러올 수 없음
class Student: Person, public Temp {
private:
    int studentID;

public:
    // 멤버변수 name은 Person으로부터 상속받음
    Student(int studentID, string name) : Person(name) {
        this->studentID = studentID;
    }

    void show() {
        cout << "학생 번호: " << studentID << '\n';
        cout << "학생 이름: " << getName() << '\n';
    }

    // overriding
    void showName() {
        cout << "overriding - 학생 이름: " << getName() << '\n';
    }
};

int main() {
    Student student(1, "허선영");
    student.showName();
    student.showTemp();
    student.show();
}