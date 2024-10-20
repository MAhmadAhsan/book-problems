#include <iostream>
using namespace std;

int main()
{

    float initialAmount, finalAmount, intersetRate, rate;
    cout << "Enter Initial Amount " << endl;
    cin >> initialAmount;
    cout << "Enter Final Amount " << endl;
    cin >> finalAmount;
    cout << "Enter Interest rate " << endl;
    cin >> intersetRate;

    int years = 0;
    while (initialAmount < finalAmount)
    {
        initialAmount = initialAmount + initialAmount * (intersetRate / 100);
        years++;
    }

    cout << "Number of years it will take " << years;

    return 0;
}