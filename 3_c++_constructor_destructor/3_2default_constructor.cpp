#include <iostream>
#include <string>

using namespace std;

class Character
{
// 기본 생성자: 0, null default
private:
    string name;
    int ragePoint;
    int hp;
    int damage;

public:
    void show()
    {
        cout << name << "[" << ragePoint << "]" << hp << " " << damage << '\n';
    }
};

int main()
{
    Character character = Character();
    character.show();
}