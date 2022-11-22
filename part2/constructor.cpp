#include <iostream>

using namespace std;

class Person {

    public: 
        string m_name;
        bool m_isMale;

        Person(string name, bool isMale) {
            this->m_name = name;
            this->m_isMale = isMale;
        }

        void sayHello() {
            cout << "Hello! My name is " << m_name << "!" << endl;
        }

};


int main() {

    // 생성하는 방법 (1)
    Person person1("Junwoo Choi", 1);
    person1.sayHello();
    cout << "person1's name: " << person1.m_name << endl;
    cout << "person1's gender: " << (person1.m_isMale == 1 ? "male" : "female") << endl;

    cout << endl;

    // 생성하는 방법 (2)
    Person *person2 = new Person("Jinkee Hong", 1);
    person2->sayHello();
    cout << "person2's name: " << person2->m_name << endl;
    cout << "person2's gender: " << (person2->m_isMale == 1 ? "male" : "female") << endl;


    return 0;
}