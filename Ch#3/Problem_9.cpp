#include <iostream>
using namespace std;

int main()
{
    unsigned long numberOfPeople, numberOfChairs, totaCombOfPeople = 1, totalCombOfChairs = 1;

    cout << "Enter Number of People: ";
    cin >> numberOfPeople;
    cout << "Enter Number of Chairs: ";
    cin >> numberOfChairs;

    if (numberOfPeople >= numberOfChairs)
    {
        for (int j = numberOfPeople; j > 0; j--)
        {
            totaCombOfPeople *= j;
        }

        for (int k = numberOfPeople - numberOfChairs; k > 0; k--)
        {
            totalCombOfChairs *= k;
        }
        cout << "Total combination of People: " << totaCombOfPeople / totalCombOfChairs << endl;
    }
    else
    {
        cout << "Number of chairs is greater than number of people" << endl;
    }

    return 0;
}