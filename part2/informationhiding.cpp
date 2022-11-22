#include <iostream>

using namespace std;


class SecretAgent {

    private:
        string realId;
        string realName;

    public:
        string fakeId;
        string fakeName;
        
        void born(string realId, string realName) {
            this->realId = realId;
            this->realName = realName;
            cout << "(baby cring)" << endl;
        }

        void onService(string fakeId, string fakeName) {
            this->fakeId = fakeId;
            this->fakeName = fakeName;
            cout << "(spy background music)" << endl;
        }

        void sayHello() {
            cout << "Hello, My name is " << fakeName << "." << endl;
        }

        void exposingIdentityAfterBeingTortured() {
            cout << "My real name is " << realName << "." << endl;
        }
};



int main() {

    SecretAgent s1;
    s1.born("11111111", "Junwoo Choi");
    s1.onService("007", "James Bond");

    cout << endl;

    s1.sayHello();
    s1.exposingIdentityAfterBeingTortured();


    return 0;
}