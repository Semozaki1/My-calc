#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <fstream>
#include <string>

using namespace std;
void Claculatour(string the_users_name, float num1, float num2, float output, char op)
{
    cout << endl << endl
         << "==============================" << '\n'
         << the_users_name << " Calculator" << '\n'
         << "==============================" << '\n'
         << "The answer=  " << fixed << setprecision(2) << output << endl;
}
int main() {
    string the_users_name;
    float num1, num2, output;
	char op;
    cout << "Enter your name: ";
    getline(cin, the_users_name);
    while (true) {
        cout << "Enter the first number: ";
        if (!(cin >> ws >> num1)) {
            cout << "Invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cout << "Enter the operation (+, -, *, /): ";
        cin >> ws >> op;


        cout << "Enter the second number: ";
        if (!(cin >> ws >> num2)) {
            cout << "invalid input. Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (op == '+') {
            output = num1 + num2;
        }
        else if (op == '-') {
            output = num1 - num2;
        }
        else if (op == '*') {
            output = num1 * num2;
        }
        else if (op == '/') {
            if (num2 != 0) {
                output = num1 / num2;
            }
            else {
                cout << "Error: Division by zero is not allowed." << endl;
                continue;
            }
        }
        else {
            cout << "Invalid operation. Please enter a valid operator." << endl;
            continue;
        }

        Claculatour(the_users_name, num1, num2, output, op);
		break;
    }

return 0;
}