#include <iostream>

using namespace std;

void sayHello() {
    cout << "Hello" << endl;
}

int add(int a, int b) {
    return a + b;
} 

int main() {

    sayHello();

    int answer = add(100, 200);

    cout << answer << endl;

    return 0;
}