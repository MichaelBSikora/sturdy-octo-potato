// This program uses recursion to calculate the sum
// of all the integers from 1 up to the number 
// passed as an argument. 

#include <iostream> 
using namespace std; 

// Function defintion 
int Num_Sum (int n) 
{

	if (n <= 0)
		return 0;
	else
		return (n + Num_Sum(n - 1)); 
}

// Function Main

int main()
{
	int n, sum; 
	cout << "Enter integer: "; 
	cin >> n; 

	sum = Num_Sum(n); 

	// Output

	cout << "Sum of numbers is: " << sum << endl; 

	return 0;
}