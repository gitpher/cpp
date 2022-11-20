#include <iostream>

int main() {

    using namespace std;

    int year;
    int month;
    int day;


    cout << "무슨 년도에 태어나셨나요? (4자리로 입력해주세요. 예: 1998)" << endl;
    cin >> year;

    cout << "무슨 월에 태어나셨나요? (2자리로 입력해주세요. 예: 09)" << endl;
    cin >> month;
    
    cout << "무슨 일에 태어나셨나요? (2자리로 입력해주세요. 예: 08)" << endl;
    cin >> day;

    cout << year << "년 " << month << "월 " << day << "일에 태어나셨군요!" << endl;

    return 0;

}