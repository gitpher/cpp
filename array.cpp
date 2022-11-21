#include <iostream>

using namespace std;

int main() {

    int score[3] = {100, 90, 95};
    int midScore[3] = {0,};
    int finalScore[3] = {90, 99, 95};

    cout << score[0] << endl;
    cout << midScore[1] << endl;
    cout << finalScore[2] << endl;

    cout << endl;
    cout << "&score: " << &score << endl; // score의 0번째 주소
    cout << "&score[0]: " << &score[0] << endl; // score의 0번째 주소
    cout << "&score[1]: " << &score[1] << endl; // score의 1번째 주소
    cout << "score: " << score <<  endl; // score의 0번째 주소
    cout << "(score+1): " << (score+1) <<  endl; // score의 1번째 주소
    cout << "*(score+1): " << *(score+1) <<  endl; // score 1번째의 값
    
    cout << endl;
    cout << "*score: " << *score << endl;


    return 0;
}