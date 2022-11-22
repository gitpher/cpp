#include <iostream>

using namespace std;


class Person {
    protected:
        string m_name;

    public:
        Person(string name) {
            m_name = name;
        }
        ~Person() {
            cout << m_name << " as a Person destroyed." << endl;
        }


        void sayHello() {
            cout << "Hello, I'm " << m_name << "." << endl;
        }
};


class Musician : public Person {
    private:
        string m_instrument;

    public:
        Musician(string m_name) : Person(m_name) {} 
        ~Musician() {
            cout << m_name << " as a Musician is destroyed." << endl;
        }

        void sayHello() {
            cout << "Hello, I'm " << m_name << ". And I play " << m_instrument << endl;
        }

        void sayHello(string language) {
            if (strcasecmp(language.c_str(), "english") == 0) {
                cout << "Hello, I'm " << m_name << ". And I play " << m_instrument << endl;
            } else if (strcasecmp(language.c_str(), "korean") == 0) {
                cout << "안녕하세요, 나는 " << m_name << "입니다. 그리고 저는 " << m_instrument << "를 합니다." << endl;
            } else {
                cout << "I don't speak " << language << endl;
            }
        }

        void setInstrument(string instrument) {
            m_instrument = instrument;
        }
};



int main() {

    Musician m1("Junwoo Choi");
    m1.setInstrument("Cello");

    m1.sayHello();
    m1.sayHello("english");
    m1.sayHello("Korean");
    m1.sayHello("Hispanic");
    cout << endl;

    return 0;
}