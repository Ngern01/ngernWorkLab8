#include <iostream>
using namespace std;

int main() {
    int age, height, bounty;
    string character;

    cout << "Enter your age: ";
    cin >> age;

    if (age <= 25) {
        cout << "\nEnter your height: ";
        cin >> height;

        if (height <= 100) {
            character = "Chopper";
        }
        else if (height <= 180) {
            character = "Usopp";
        }
        else {
            cout << "\nEnter your bounty: ";
            cin >> bounty;

            if (bounty > 1100000000) {
                character = "Zoro";
            }
            else {
                character = "Sanji";
            }
        }
    }
    else { // age > 25
        if (age > 60) {
            character = "Brook";
        }
        else {
            cout << "\nEnter your bounty: ";
            cin >> bounty;

            if (bounty > 500000000) {
                character = "Jinbe";
            }
            else {
                character = "Franky";
            }
        }
    }

    cout << "\n\nYour character = " << character << endl;

    return 0;
}

/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
