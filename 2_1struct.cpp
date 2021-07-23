#include <iostream>
#include <string>

using namespace std;

struct student {
    string name;
    int score;
};

int main() {
    struct student a;
    a.name = "허선영";
    a.score = 100;
    cout << a.name << ": " << a.score << "점\n";
}
