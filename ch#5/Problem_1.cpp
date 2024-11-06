#include <iostream>
using namespace std;
float circArea(float radius) {
  return 3.14 * radius * radius;
}
int main() {
  float radius;
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  float circleArea = circArea(radius);
  cout << "Area of the circle is " << circleArea;
  return 0;
}
