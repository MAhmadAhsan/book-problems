/*Create a structure called Volume that uses three variables of type Distance (from the
ENGLSTRC example) to model the volume of a room. Initialize a variable of type Volume
to specific dimensions, then calculate the volume it represents, and print out the result.
To calculate the volume, convert each dimension from a Distance variable to a variable
of type float representing feet and fractions of a foot, and then multiply the resulting
three numbers.*/

#include <iostream>
using namespace std;
struct Distance
{
    int feet;
    int inches;
};

int main()
{
    Distance distance1, distance2, distance3;
    distance1 = {4, 11};
    distance2 = {8, 3};
    distance3 = {7, 2};

    float distance1_float, distance2_float, distance3_float;
    distance1_float = distance1.feet + (distance1.inches / float(12));
    distance2_float = distance2.feet + (distance2.inches / float(12));
    distance3_float = distance3.feet + (distance3.inches / float(12));

    float volume;
    volume = distance1_float * distance2_float * distance3_float;
    cout << "Volume is equal to: " << volume;
    return 0;
}