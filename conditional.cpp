#include <iostream>

int main() {

    using namespace std;


    int carrot = 0;

    cout << "How many carrots do you have?" << endl;
    cin >> carrot;


    if (carrot < 5) {
        cout << "buy more carrots" << endl;
    } else {
        cout << "you don't need any more carrots" << endl;
    }


    return 0;
}