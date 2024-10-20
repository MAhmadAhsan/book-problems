#include <iostream>
using namespace std;
int main()
{
    // Declaration of Variables
    int firstNum, secondNum;
    char oper, YN;
    do
    {
        // Initializing of Variables by user
        cout << "Enter the first number ";
        cin >> firstNum;
        cout << "Enter operation you want to perform ";
        cin >> oper;
        cout << "Enter the second number ";
        cin >> secondNum;

        // Performing operation using switch statement
        switch (oper)
        {
        case '+':
        {
            cout << firstNum + secondNum << endl;
            break;
        }
        case '-':
        {
            cout << firstNum - secondNum << endl;
            break;
        }
        case '/':
        {
            cout << float(firstNum) / float(secondNum) << endl;
            break;
        }
        case '*':
        {
            cout << firstNum * secondNum << endl;
            break;
        }
        case '%':
        {
            cout << firstNum % secondNum << endl;
            break;
        }
        default:
        {
            cout << "You Entered Invalid Operator" << endl;
        }
        }
        cout << "Do you want to do another calculation \"y\" for yes and \"n\" for no ";
        cin >> YN;
    } while (YN == 'y');
    
    return 0;
}