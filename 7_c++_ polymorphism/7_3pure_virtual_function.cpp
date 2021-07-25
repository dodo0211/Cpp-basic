#include <iostream>

using namespace std;

class A {
public:
    /** 
     * 가상함수에 =0 키워드를 붙이면 순수 가상 함수(pure virtual function)
     * 순수 가상 함수는 반드시 자식 클래스에서 재정의해줘야 한다.
     * 순수 가상 함수는 부모 클래스에서 함수 동작의 본체를 정의하지 않는다.
    */
    virtual void show()=0;
    // { cout << "A 클래스이다." << endl; }
};

class B : public A {
    //show() 함수를 재정의하지 않으면 B 클래스의 객체를 사용할 수 없다.
public:
    virtual void show() {
        cout << "B 클래스이다." << endl;
    }
};

int main() {
    A* p;
    B b;
    p = &b; p->show();
}