#include <iostream>
#include <string>

using namespace std;

class Character {
private:
    string name;
    int ragePoint;
    int hp;
    int damage;

public:
    Character(string name, int hp, int damage) : name(name), ragePoint(0), hp(hp), damage(damage) {}
    ~Character() {
        cout << "[객체가 소멸됩니다.]\n";
    }
    void pointUp() { ragePoint++; }
    void show() {
        cout << name << "[" << ragePoint << "]" << hp << "  " << damage << '\n';
    }
};

int main() {
    Character* character1 = new Character("슬라임", 10, 20);
    character1->pointUp();

    Character character2(*character1);
    character2.pointUp();

    character1->show();
    character2.show();

    // 동적할당을 이용했으므로 성공적으로 소멸됨
    // main 함수가 끝나도 delete를 하지 않으면 남아있음
    delete character1;

    // 동적할당을 이용하지 않았으므로 오류
    // main 함수가 끝나면 소멸
    // 3_4destructor(1661,0x1042c7d40) malloc: *** set a breakpoint in malloc_error_break to debug
    // delete &character2;
}