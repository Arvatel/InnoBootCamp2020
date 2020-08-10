#include <iostream>
#include <string>

using namespace std;

int main(){
    string login, password;
    string new_login, new_password;

    cout << "You should sing up in our site" << endl;
    cout << "Create a login: ";
    cin >> login;
    cout << "Crete a password: ";
    cin >> password;

    cout << "Great! Now you should sing in" << endl;
    for (int i = 0; i < 3; i++){
        cout << "login: ";
        cin >> new_login;
        cout << "password: ";
        cin >> new_password;
        if ((new_login == login) && (new_password == password)){
            cout << "You in" << endl;
            return 0;
        }
        cout << "incorrect, try again. You have " << 3 - i - 1 << " tries more" << endl;
    }
    cout << "You blocked" << endl;

    return 0;
};
