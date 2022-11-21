#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};


int main() {

    Person person1;
    person1.name = "Junwoo Choi";
    person1.age = 24;

    Person person2 = {"Jinkee Hong", 54};

    cout << "person1's name: " << person1.name << endl;
    cout << "person2's name: " << person2.name << endl;


    Person students[2] = {
        {"Steve Jobs", 33},
        {"Bill Gates", 33}
    };

    cout << "student[0].name: " << students[0].name << endl;
    cout << "student[1].name: " << students[1].name << endl;

    return 0;
}