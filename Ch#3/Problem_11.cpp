#include <iostream>
using namespace std;

int main() {
    // Variables to store input amounts and results
    int pound_1, shilling_1, pence_1, multiple;
    int pound_2, shilling_2, pence_2;
    int finalPound, finalShilling, finalPence;
    char dummy, oper;

    cout << "Select the operator (+, -, *): ";
    cin >> oper;

    cout << "Enter amounts in old style British currency" << endl;

    if (oper == '+' || oper == '-') {
        cout << "\nEnter first amount (pound.shilling.pence): ";
        cin >> pound_1 >> dummy >> shilling_1 >> dummy >> pence_1;

        cout << "Enter second amount (pound.shilling.pence): ";
        cin >> pound_2 >> dummy >> shilling_2 >> dummy >> pence_2;
    }
    else if (oper == '*') {
        cout << "\nEnter amount (pound.shilling.pence): ";
        cin >> pound_1 >> dummy >> shilling_1 >> dummy >> pence_1;

        cout << "Enter the number by which you want to multiply: ";
        cin >> multiple;
    }

    switch (oper) {
        case '+': {
            finalPound = pound_1 + pound_2;
            finalShilling = shilling_1 + shilling_2;
            finalPence = pence_1 + pence_2;

            if (finalPence > 11) {
                finalPence -= 12;
                finalShilling++;
            }
            if (finalShilling > 19) {
                finalShilling -= 20;
                finalPound++;
            }

            cout << "Sum: " << finalPound << dummy << finalShilling << dummy << finalPence << "\n";
            break;
        }
        case '-': {
            finalPound = pound_1 - pound_2;
            finalShilling = shilling_1 - shilling_2;
            finalPence = pence_1 - pence_2;

            if (finalPence < 0) {
                finalPence += 12;
                finalShilling--;
            }
            if (finalShilling < 0) {
                finalShilling += 20;
                finalPound--;
            }

            cout << "Difference: " << finalPound << dummy << finalShilling << dummy << finalPence << "\n";
            break;
        }
        case '*': {
            finalPound = pound_1 * multiple;
            finalShilling = shilling_1 * multiple;
            finalPence = pence_1 * multiple;

            if (finalPence > 11) {
                finalPence -= 12;
                finalShilling++;
            }
            if (finalShilling > 19) {
                finalShilling -= 20;
                finalPound++;
            }

            cout << "Product: " << finalPound << dummy << finalShilling << dummy << finalPence << "\n";
            break;
        }
        default: {

            cout << "You entered an invalid operator!" << endl;
            break;
        }
    }

    return 0;
}