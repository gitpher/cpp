#include <iostream>

int main() {

    using namespace std;


    int counter = 0;


    cout << "enter counter: " << endl;
    cin >> counter;

    if (counter > 100) {
        cout << "it is too much. please re-submit your number" << endl;
        cin >> counter;
    } 

    int i = 0;
    while (i < counter) {

        cout << "counting " << i + 1 << endl;
        i++;
    }

    cout << "end" << endl;

    return 0;
}