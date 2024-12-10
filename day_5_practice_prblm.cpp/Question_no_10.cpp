// Write a program to accept length and breadth of rectangle from user. And calculate area and perimeter of rectangle. Display the result on console. 
#include <iostream>
using namespace std;
int main()
{

cout << "enter length of rectangle" << "\n";
float length_of_rectangle;
cin >> length_of_rectangle;

cout << "enter breadth of rectangle" << "\n";
float breadth_of_rectangle;
cin >> breadth_of_rectangle;

float area_of_rectangle = length_of_rectangle * breadth_of_rectangle;
float perimeter_of_rectangle = 2 * ( length_of_rectangle + breadth_of_rectangle);

cout << "area of rectangle ="  << area_of_rectangle << "\n";
cout << "perimeter of rectanle =" << perimeter_of_rectangle << "\n";



    return 0;
}