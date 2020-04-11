#include <iostream>

using namespace std;

int main()
{
	double interest;
	int principle;
	double rate;
	int time;

	cout << "Please enter the principle amount: ";
	cin >> principle;
	cout << "Please enter the interest rate: ";
	cin >> rate;
	cout << "Please enter the loan duration (in years): ";
	cin >> time;

	interest = (principle * rate * time) / 100;

	cout << "Simple interest is: $" << interest << ".";


}