#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int score;

public:
    Student(string n, int s)
    {
        name = n;
        score = s;
    }
    void show()
    {
        cout << name << ": " << score << "점 \n";
    }
};

int main()
{
    Student a = Student("허선영", 100);
    a.show();
}