#include <iostream>
#include <string>

using namespace std;

// T에는 어떠한 타입도 올 수 있다.
template <typename T>
void change(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// a와 b 모두 string이기 때문에 T는 string타입이 된다.
// 만약 a와 b의 타입을 다르게 하고싶다면, T2등으로 하나 더 선언하는 방법등이 있다.
int main()
{
    string a = "허선영";
    string b = "송훈일";
    change(a, b);
    cout << a << ": " << b << endl;
}