/* Average acceleration is defined as the change of velocity divided by the time taken to make the change, as shown in the following formula:

    a = (v1 - v0) / t
Write a program that prompts the user to enter the starting velocity v0 in meters/second, the ending velocity v1 in meters/second, and the time span t in seconds, and displays the average acceleration.

Sample Run
Input
Enter v0 : 5.5
Enter v1 : 50.9
Enter t  : 4.5

Output
The average acceleration is 10.0889*/
# include <iostream>
using namespace std;
int main()
{
cout  << "enter the starting velocity v0 in meters/second" << "\n";
float starting_velocity_v0;
cin >> starting_velocity_v0;

cout << "the ending velocity v1 in meters/second" << "\n";
float ending_velocity_v1;
cin >> ending_velocity_v1;

cout << " the time span t in seconds" << "\n";
float time_spent_t;
cin >> time_spent_t;

float accelaration = (ending_velocity_v1 - starting_velocity_v0) / time_spent_t;
cout << "average accelaration is" << " " << accelaration << "\n";

return 0;

}