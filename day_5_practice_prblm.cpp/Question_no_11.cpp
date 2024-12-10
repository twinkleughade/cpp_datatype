/*Write a program that calculates the energy needed to heat water from an initial temperature to a final temperature. Your program should prompt the user to enter the amount of water in kilograms and the initial and final temperatures of the water.

The formula to compute the energy is Q = M * (finalTemperature – initialTemperature) * 4184

where M is the weight of water in kilograms temperatures are in degrees Celsius, and energy Q is measured in joules.

Here is a sample run:

sample run*/ 
# include <iostream>
using namespace std;
int main()
{
cout << "enter thr amount of water in kilograms" << "\n";
float amount_of_water_in_kilograms;
cin >> amount_of_water_in_kilograms;

cout << "enter the initial temperature" << "\n";
float initial_temperature;
cin >> initial_temperature;

cout << "enter the final temperature" << "\n";
float final_temperature;
cin >> final_temperature;

float energy_needed = amount_of_water_in_kilograms * (final_temperature - initial_temperature) * 4184;
 cout << "energy needed =" << energy_needed << "\n";

// water in kg  =55.5,  initial temperature = 3.5,  final temperature = 10.5










    return 0;
}