// This program uses recursion to raise a number to a power. 

#include <iostream> 
using namespace std; 

// Function prototype 

int power(int x, int n); // two arguments--number to be raised, exponent


int main()
{

	int base; 
	int exponent, pow; 

	cout << "Enter base value: ";
	cin >> base; 
	cout << "Enter exponent value: ";
	cin >> exponent;
	cout << base << " Raise to " << exponent << " is: " << power(base, exponent) << endl; 
	return 0; 

}

// Function to raise x to the power of n. 

int power(int x, int n) 
{
	if (n == 0)
		return 1; 
	else
		return x * power(x, n - 1);
}