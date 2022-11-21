#include <iostream>



int main() {

    using namespace std;


    int age;

    cout << "나이를 입력해주세요." << endl;
    cin >> age; 

    if (age > 19) {
        cout << "성인입니다." << endl;
    } else {
        cout << "성인이 아닙니다." << endl;
    }

    return 0;
}