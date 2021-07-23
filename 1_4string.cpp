#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cout << "영어 문자열을 입력하시오 >>" << endl;

    // >> 는 공백을 기준으로 입력 받음
    cin >> input;
    // 공백을 포함하여 입력된 한 줄을 전부 입력을 받고 싶다면
    // getline(cin, input);

    for(int i=0;i<input.size();i++) {
        cout << input[i] << '\n';
    }
}