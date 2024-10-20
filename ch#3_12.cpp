#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    char dummy, repetition;
    do
    {
        cout << "Enter First fraction " << endl;
        cin >> a >> dummy >> b;
        cout << "Enter second fraction " << endl;
        cin >> c >> dummy >> d;

        cout << "Sum of the fraction " << (a * d + b * c) << dummy << (b * d) << endl;
        cout << "Difference of the fraction " << (a * d - b * c) << dummy << (b * d) << endl;
        cout << "Product of the fraction " << (a * c) << dummy << (b * d) << endl;
        cout << "Division of the fraction " << (a * d) << dummy << (b * c) << endl;
        cout << "Do you want to perform another calculation? (y/n) ";
        cin >> repetition;

    } while (repetition == 'y');
}