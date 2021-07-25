#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Time {
    // Date 클래스에서 Time 클래스를 이용할 수 있음
    friend class Date;
private:
    int hour, min, sec;
public:
    void setCurrentTime() {
        time_t currentTime = time(NULL);
        // tm 구조체에 시, 분. 초
        struct tm *p = localtime(&currentTime);
        hour = p->tm_hour;
        min = p->tm_min;
        sec = p->tm_sec;
    }
};

class Date {
private:
    int year, month, day;
public:
    Date(int year, int month, int day): year(year), month(month), day(day) { }
    void show(const Time &t) {
        cout << "지정된 날짜: " << year << "년 " << month << "월 " << day << "일" << "\n";
        // friend가 아니면 t.getHour() 같은 방법으로 접근해야 함
        cout << "현재 시간: " << t.hour << "시 " << t.min << "분 " << t.sec << "초" << "\n";
    }
};

/**
 * friend를 남용하면 정보 은닉의 효과가 떨어지기 때문에 OOP의 본질을 제대로 활용하지 못할 수 있다.
 * 
 * 적재적소에 필요할 때만 활용하길 권고
*/

int main() {
    Time time;
    time.setCurrentTime();
    Date date = Date(2019, 12, 22);
    date.show(time);
}