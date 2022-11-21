#include <iostream>


int main() {

    using namespace std;

    string greetingsInEnglish = "Hello there";
    string greetingsInKorean = "Uy";
    string greetingsInEnglishAndKorean = greetingsInEnglish + ". " + greetingsInKorean + "!";

    cout << greetingsInEnglishAndKorean << endl;

    string username = "jun_chois";
    string symbol = "@";
    string domain = "naver.com";
    
    string email = username + symbol + domain;

    cout << "email: " << email << endl;

    cout << "email.size(): " << email.size() << endl;
    cout << "email.substr(username.size(), symbol.size()): " << email.substr(username.size(), symbol.size()) << endl;
    cout << "email.find(domain): " << email.find(domain) <<  endl;

    email.append("hacking");
    cout << email << endl;


    return 0;
}