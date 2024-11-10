#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to generates its table" << endl;
    cin >> n;
    for (int i = 1; i <= 200; i++)
    {
        cout << setw(10) << i * n ;
        
        if (i % 10 == 0)
        {
            cout << "\n";
        }
    }
    return 0;
}
