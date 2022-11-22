#include <iostream>

using namespace std;

class Person {

    private:
        string m_name;

    public:
        Person(string name) {
            m_name = name;
        }
        ~Person() {

        }

        void sayHello() {
            cout << "Hello, I'm " << m_name << "." << endl;
        }
        string getName() {
            return m_name;
        }
};

class Musician : public Person {
    
    private:
        string m_instrument;

    public:
        Musician(string m_name) : Person(m_name) {
            
        }
        ~Musician() {
            cout << this->getName() << " is destroyed." << endl;
        }

        void setInstrument(string instrument) {
            m_instrument = instrument;
        }
        string getInstrument() {
            return m_instrument;
        }
};


int main() {

    Musician m1 = Musician("Taylor Swift");
    m1.setInstrument("guitar");
    m1.sayHello();
    cout << m1.getInstrument() << endl;

    return 0;
}