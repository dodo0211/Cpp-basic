// 명시적 특수화 explicit_specialization
#include <iostream>
#include <string>

using namespace std;

template <typename T>
void change(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <>
void change<int>(int &a, int &b)
{
    cout << "정수형 데이터를 교체한다. \n";
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 429;
    int b = 211;
    change(a, b);
    cout << a << ": " << b << endl;
}