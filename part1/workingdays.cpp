#include <iostream>


int main() {


    using namespace std;

    int workingDays = 0;
    int salary = 0;

    cout << "How many days do you work a week?" << endl;

    cin >> workingDays;

    for (int i=0; i<workingDays; i++) {
        salary++;
    }

    cout << "Your salary must be " << salary << endl;

    return 0;
}