#include <iostream>

using namespace std;

class A {
public:
    void show() { cout << "A 클래스이다." << endl; }
};

class B : public A {
    void show() { cout << "B 클래스이다." << endl; }
};

int main() {
    A* p;
    A a;
    B b;

    p = &a; p->show();
    // 여전히 A 클래스의 show() 함수를 호출
    // p라는 포인터가 A라는 클래스 타입으로 명시되어 있기 때문
    // 정적 바인딩 때문에 발생하는 문제 -> 추상 클래스(동적 바인딩)으로 해결
    p = &b; p->show();
}