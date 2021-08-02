#include <iostream>
#include <string>

using namespace std;

// 어떤 자료형을 사용할지 명시하지 않았을때, 기본적으로(default) int형을 사용한다.
// class template는 <typename T>
template <typename T = int>
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
    // class template는 위의 주석과 같이 자료형을 비워두고 Data<int> data1;
    Data<> data1(1);
    Data<string> data2("허선영");
    cout << data1.getData() << ": " << data2.getData() << "\n";
}