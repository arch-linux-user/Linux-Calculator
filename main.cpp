#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num;
    double num1;
    double num2;
    double num3;
    double num4;
    double num5;
    double num6;
    double num7;
    double equal;
    double equal1;
    double equal2;
    double equal3;

    while(true) {
        cout << "1.Addition" << endl;
        cout << "2.Subtraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        cout << "5.Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter first number > ";
                cin >> num;
                cout << "Enter second number > " ;
                cin >> num1;
                equal = num + num1;
                cout << " " << endl;
                cout << equal << endl;
                cout << " " << endl;

                break;
            case 2:
                cout << "Enter first number > ";
                cin >> num2;
                cout << "Enter second number > " ;
                cin >> num3;
                equal1 = num2 - num3;
                cout << " " << endl;
                cout << equal1 << endl;
                cout << " " << endl;

                break;
            case 3:
                cout << "Enter first number > ";
                cin >> num4;
                cout << "Enter second number > ";
                cin >> num5;
                equal2 = num4 * num5;
                cout << " " << endl;
                cout << equal2 << endl;
                cout << " " << endl;

                break;
            case 4:
                cout << "Enter first/ number > ";
                cin >> num6;
                cout << "Enter second number > ";
                cin >> num7;
                equal3 = num6 / num7;
                cout << " " << endl;
                cout << equal3 << endl;
                cout << " " << endl;
                break;
            case 5:
                return 0;
                break;
            default:
                cout << " " << endl;
                cout << "Invalid choice try again :( " << endl;
                cout << " " << endl;

           


        }
	




    }
    
    return 0;
}
