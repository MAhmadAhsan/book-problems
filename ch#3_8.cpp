#include <iostream>
using namespace std;

int main()
{
    int pound_1, shilling_1, pence_1;
    int pound_2, shilling_2, pence_2;
    int totalPound, totalShilling, totalPence;
    char dummy, con;

    do
    {
        /* code */
        cout << "Enter all amounts in Old british currency" << endl;
        cout << "\nEnter First Amount ";
        cin >> pound_1 >> dummy >> shilling_1 >> dummy >> pence_1;
        cout << "Enter second Amount ";
        cin >> pound_2 >> dummy >> shilling_2 >> dummy >> pence_2;

        // Code for summing the amounts
        totalPound = pound_1 + pound_2;
        totalShilling = shilling_1 + shilling_2;
        totalPence = pence_1 + pence_2;
        if (totalPence > 11)
        {
            totalPence -= 12;
            totalShilling++;
        }
        if (totalShilling > 19)
        {
            totalShilling -= 20;
            totalPound++;
        }

        cout << "Total amuont " << totalPound << dummy << totalShilling << dummy << totalPence << "\n";
        cout << "Do you want to continue (y/n)? ";
        cin >> con;
    } while (con == 'y');

    return 0;
}
