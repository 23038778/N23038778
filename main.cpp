#include <iostream>
using namespace std;

int main() {
    int age;
    char gender, partner_gender;

    cout << "Welcome! Let's find you a partner.\n";
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Enter your gender (M/F): ";
        cin >> gender;

        if (gender == 'M' || gender == 'm') {
            cout << "Enter your partner's gender (F/M): ";
            cin >> partner_gender;

            if (partner_gender == 'F' || partner_gender == 'f') {
                cout << "Your ideal partner is someone who is caring and compassionate!\n";
            } else if (partner_gender == 'M' || partner_gender == 'm') {
                cout << "Your ideal partner is someone who shares your interests and hobbies!\n";
            } else {
                cout << "Invalid partner's gender!\n";
            }

        } else if (gender == 'F' || gender == 'f') {
            cout << "Enter your partner's gender (M/F): ";
            cin >> partner_gender;

            if (partner_gender == 'M' || partner_gender == 'm') {
                cout << "Your ideal partner is someone who is kind-hearted and supportive!\n";
            } else if (partner_gender == 'F' || partner_gender == 'f') {
                cout << "Your ideal partner is someone who respects your independence and ambitions!\n";
            } else {
                cout << "Invalid partner's gender!\n";
            }

        } else {
            cout << "Invalid gender!\n";
        }

    } else {
        cout << "You are too young to use this program.\n";
    }

    return 0;
}
