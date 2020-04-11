#include <iostream>

using namespace std;

int main()
{

	int input;

	cout << "Please enter a number (-1 to stop): " ;
	cin >> input;

	while (input != -1)
	{
		if (input % 2 == 0)
		{
			cout << "This number is even!" << endl;
		}
		else if (input % 2 == 1)
		{
			cout << "This number is odd!" << endl;
		}
		cin >> input;
	}
	
	

}