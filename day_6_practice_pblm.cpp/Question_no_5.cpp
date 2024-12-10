/* Write a program that reads in the radius and length of a cylinder and computes the area and volume using the following formulas:

    area = radius * radius * π
    volume = area * length

    value of π (PI) is  3.14
    Sample Run
    INPUT
    Enter the radius of a cylinder: 5.5
    Enter the length of a cylinder: 12
    
    OUTPUT
    The area is 95.0331
    The volume is 1140.4*/
# include <iostream>
using namespace std;
int main()
{
cout << "enter the radius of cylinder" << "\n";
float radius;
cin >> radius;

cout << "enter the length of cylinder" << "\n";
float length;
cin >> length;

float area = radius * radius * 3.14;
float volume = area * length;

cout << "area of cylinder = "  << area << "\n";
cout << "volume of cylinder = "  << volume << "\n";




    return 0;
}