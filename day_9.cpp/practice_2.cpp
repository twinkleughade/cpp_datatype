// ramesh want to withdraw 500 rs from his account. but suresh have the pin number, 
//if suresh gave coreect pin number , ramesh can withdraw. if ramesh able to withdraw money, 
//print withdraw succesfully. 
# include <iostream>
using namespace std;
int main()
{
    int pin_number = 0;
    int correct_pin_number = 1234;

    cout << "enter pin number" << "\n";
    cin >> pin_number;

if(pin_number == correct_pin_number)
{
    cout << "withdraw succesfully" << "\n";
}

}