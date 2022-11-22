#include <iostream>

using namespace std;


class Person {

    protected:
        string m_name;

    public:
        Person(string name) {
            m_name = name;
        }

        virtual void sayHello() { // vitual, 가상함수로 선언
            cout << "Hello, I'm " << m_name << "." << endl;
        }
};

class Musician : public Person {

    protected:
        string m_instrument;

    public:
        Musician(string m_name) : Person(m_name) {}

        void sayHello() {
            cout << "Hello, I'm " << m_name << " and I am a musician!" << endl;
        }

        string getInstrument() {
            return m_instrument;
        }
        void playingSomething() {
            cout << "Playing..." << endl;
        }
};


class Baker : public Person {

    public:
        Baker(string m_name) : Person(m_name) {}

        void sayHello() {
            cout << "Hello, I'm " << m_name << " and I am a baker!" << endl;
        }
        void bakeSomething() {
            cout << "Baking..." << endl;
        }
};



int main() {

    Person *p1 = new Musician("Junwoo Choi");
    p1->sayHello();
    // p1->playSomething();
    cout << endl;

    Person *p2 = new Baker("Jinkee Hong");
    p2->sayHello();
    // p2->bakingSomething();
    cout << endl;


    delete p1;
    delete p2;

    return 0;
}