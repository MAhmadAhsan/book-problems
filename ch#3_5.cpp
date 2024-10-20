#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "How manu rows of pyramid you want ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= rows - i; k++ )
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}