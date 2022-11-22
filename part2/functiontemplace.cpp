#include <iostream>

using namespace std;


int sum(int a, int b) {
    return a + b;
} 

double sum(double a, double b) {
    return a + b;
}

template <typename T>
T sum(T a, T b) {
    return a + b;
}

// 템플릿 특수화 (template specialization)
template <>
char sum<char>(char a, char b)
{
    cout << "[ERROR] UNABLE TO SUM CHAR" << endl;
    return a;
}


int main() {

    int s1 = sum(2, 3);
    double s2 = sum(2.5, 3.3);
    string s3 = sum<string>("Junwoo", " Choi");
    double s4 = sum<double>(3.5, 4.3);

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;

    // unwanted result
    char s5 = sum<char>('a', 'c');
    cout << s5 << endl;

    return 0;
}