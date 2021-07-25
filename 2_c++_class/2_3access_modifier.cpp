#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int englichScore;
    int mathScore;
    int getSum()
    {
        // 정보 은닉
        // private이기 때문에, 같은 class 내에서만 사용 가능
        return englichScore + mathScore;
    }

public:
    Student(string n, int e, int m)
    {
        name = n;
        englichScore = e;
        mathScore = m;
    }
    void show()
    {
        cout << name << ": [합계 " << getSum() << "점]\n";
    }
};

int main() {
    Student a = Student("허선영", 100, 98);
    a.show();
    // private 접근 제한자는 외부에서 접근 불가 (error)
    // cout << a.getSum();
}