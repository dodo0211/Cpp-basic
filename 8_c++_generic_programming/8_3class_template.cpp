#include <iostream>
#include <string>

using namespace std;

// 자료형에 따라서 다르게 동작하는 클래스 집합을 만들 수 있다.
template <typename T>
class Data
{
private:
    T data;

public:
    Data(T data) : data(data) {}
    void setData(T data) { this->data = data; }
    T getData() { return data; }
};

int main()
{
    Data<int> data1(1);
    Data<string> data2("허선영");
    cout << data1.getData() << ": " << data2.getData() << "\n";
}