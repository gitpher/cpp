#include <iostream>

using namespace std;


class Person {
    
    private:
        string socialSecurityNumber;
        int weight;

    public: 
        string name;
        
        void sayHello() {
            cout << "Hello! My name is " << name << endl;
        }

        void saySocialSecurityNumber() {
            cout << "My social security number is " << socialSecurityNumber << endl;
        }

        void sayWeight() {
            cout << "My weight is " << weight << endl;
        }

        void setSocialSecurityNumber(string socialSecurityNumber) {
            this->socialSecurityNumber = socialSecurityNumber;
        }

        void setWeight(int weight) {
            this->weight = weight;
        }
};


int main() {

    Person person1;

    person1.name = "Junwoo Choi";
    person1.setSocialSecurityNumber("1111-99999");
    person1.setWeight(88);
    
    person1.sayHello();
    person1.saySocialSecurityNumber();
    person1.sayWeight();

    return 0;
}