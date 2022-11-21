#include <iostream>

int main() {

    using namespace std;

    int floor = 0;
    int room = 0;

    cout << "number of floors of the building: " << endl;
    cin >> floor;
    cout << "number of rooms per floor in the building: " << endl;
    cin >> room;


    for (int i=1; i<=floor; i++) {
        for(int j=1; j<=room; j++) {
            cout << "Room Number: " << i * 100 + j << endl;
        }
        cout << endl;
    }

    return 0;
}