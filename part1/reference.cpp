#include <iostream>

using namespace std;

int main() {


    int soccerBall = 5;
    int &NumberOfMyFavoriteBall = soccerBall;

    NumberOfMyFavoriteBall++;

    cout << NumberOfMyFavoriteBall << endl;
    cout << soccerBall << endl;
    cout << &NumberOfMyFavoriteBall << endl;
    cout << &soccerBall << endl;

    return 0;
}