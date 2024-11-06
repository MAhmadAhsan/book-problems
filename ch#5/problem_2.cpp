#include <iostream>
using namespace std;
double power(double base, int exponent = 2)
{
  int positiveExponent = (exponent < 0) ? -exponent : exponent;
  double result = 1;
  for(int i = 0; i < positiveExponent; i++)
    {
      result *= base;
    }
  if(exponent < 0)
  {
    result = 1 / result;
  }
  return result;
}
int main()
{
  double base;
  int exponent;
  cout << "Enter base" << endl;
  cin >> base;
  cout << "Enter exponent" << endl;
  cin >> exponent;
  cout << power(base,exponent);
return 0;
}
