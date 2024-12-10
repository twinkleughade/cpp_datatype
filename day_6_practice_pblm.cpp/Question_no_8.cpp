/* If you know the balance and the annual percentage interest rate, you can compute the interest on the next monthly payment using the following formula:

interest = balance x (annualInterestRate/1200)

Write a program that reads the balance and the annual percentage interest rate and displays the interest for the next month.*/
# include <iostream>
using namespace std;
int main()
{
cout << "enter the balance" << "\n";
float balance;
cin >> balance;

cout << "enter annual percentage interest rate" << "\n";
float annual_percentage_interest_rate;
cin >> annual_percentage_interest_rate;

float interst_for_the_next_month = balance * (annual_percentage_interest_rate / 1200);

cout << "interest for the next month =" << interst_for_the_next_month << "\n";




   
    return 0;

}