// This program implements a sign using a recursive approach

#include <iostream>
using namespace std; 

void sign(int n)
{
	if (n > 0)
	{
		cout << "No Parking!\n";
		n--;

		// Call

		sign(n);
	}
}

int main()
{
	int num;

	// Input data
	cout << "Enter an integer: "; 
	cin >> num; 

	// Function call 
	sign(num);
	return 0;
}