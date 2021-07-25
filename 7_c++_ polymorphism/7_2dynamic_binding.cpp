#include <iostream>

using namespace std;

// 가상 함수
class A {
public:
    virtual void show() { cout << "A 클래스이다." << endl; }
};

class B : public A {
    virtual void show() { cout << "B 클래스이다." << endl; }
};

int main() {
    A* p;
    A a;
    B b;

    /**
     * p라는 포인터 변수가 b를 가르킬 때 class B에 포함되어 있는 show()가 실행될 수 있도록 
     * 포인터 변수 p가 메모리 공간을 찾기 때문에, p = &b; p->show()는
     * 정적 바인딩과 달리 "B 클래스이다."가 출력된다.
    */
    p = &a; p->show();
    p = &b; p->show();
}