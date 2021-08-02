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

int main()
{
    string a = "허선영";
    string b = "송훈일";
    change(a, b);
    cout << a << ": " << b << endl;
}