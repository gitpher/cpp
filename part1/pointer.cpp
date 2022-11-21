#include <iostream>

using namespace std;

int main() {

    int numberOfStars = 5;
    int *p_numberOfStars; // 포인터 변수를 선언한다
    p_numberOfStars = &numberOfStars; // 


    *p_numberOfStars = *p_numberOfStars + 5; // 포인터 변수를 가져와라

    cout << p_numberOfStars << endl;
    cout << numberOfStars << endl;


    return 0;
}