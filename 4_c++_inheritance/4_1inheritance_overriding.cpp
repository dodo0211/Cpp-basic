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

    // 위와 같은 코드, 문법만 다른 것
    // Person(string name) : name(name) {
    //     this->name = name;
    // }

    string getName() {
        return name;
    }

    void showName() {
        cout << "이름: " << getName() << '\n';
    }
};

// Child Class
class Student: Person{
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
    // Parent class에서는 그냥 name
    void showName() {
        cout << "학생 이름: " << getName() << '\n';
    }
};

int main() {
    Student student(1, "허선영");
    student.showName();
    student.show();
}