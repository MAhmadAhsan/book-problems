/*Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.*/

#include <iostream>
using namespace std;
struct Employee
{
    int number;
    float compensation;
};

int main()
{
    Employee employee[3];

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ")" << "Enter employee number: ";
        cin >> employee[i].number;
        cout << i + 1 << ")" << "Enter employee compensation: ";
        cin >> employee[i].compensation;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ")" << "Employee number: " << employee[i].number << endl;
        cout << "Employee compensation: " << employee[i].compensation << endl;
    }
    return 0;
}