#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int englishScore;
    int mathScore;
    int getSum()
    {
        return englishScore + mathScore;
    }

public:
    Student(string name, int englishScore, int mathScore)
    {
        // 변수이름이 일치하기 때문에 이 이름의 변수가 정확히 어떤 걸 가르키는지 알아랴 함
        // 자기 자신의 멤버 변수에 접근
        // 멤버변수 name에 name을 넣겠다
        this->name = name;
        this->englishScore = englishScore;
        this->mathScore = mathScore;
    }
    void show() { cout << this->name << ": [합계 " << getSum() << "점]\n"; };
};

int main()
{
    Student a = Student("허선영", 100, 98);
    a.show();
}