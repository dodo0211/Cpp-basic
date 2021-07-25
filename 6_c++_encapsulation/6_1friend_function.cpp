#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int studentId;
    string name;
public:
    Student(int studentId, string name): studentId(studentId), name(name) { }

    // 실행결과는 동일
    // Student operator +(const Student &other) {
    //     return Student(studentId, name + " & " + other.name);
    // }
    friend Student operator +(const Student &student, const Student &other) {
        // friend 키워드를 이용해서 이름에 접근
        return Student(student.studentId, student.name + " & " + other.name);
    }
    void showName() { cout << "이름: " << name << '\n'; }
};

int main() {
    Student student(1, "허선영");
    Student result = student + student;
    result.showName();
}