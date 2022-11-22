#include <iostream>

using namespace std;


int main() {

    int num[3] = {11, 22, 33};
    int input = 0;

    cout << "Plese enter integer between 1~3" << endl;
    cin >> input;

    try {
        if (input < 1 || input > 3) {
            throw input; 
        }

        cout << num[input -1] << endl;
    } catch (int e) {
        cout << "INVALID INPUT: " << e << endl;
    }

    cout << "DONE" << endl;


    return 0;
}