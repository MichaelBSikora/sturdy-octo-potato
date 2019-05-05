// This program accepts either a pointer to a C-string 
// or a string object as its argument. The function 
// returns the character that appears most frequently
// in the string. 

#include <iostream>
#include <string>
using namespace std; 

// global variable 
const int SIZE = 50; 

// Function Prototype 

void frequency(char *, int); 

int main()
{
	using namespace std; 
	char sequence [SIZE]; 

	// input string 

	cout << "Enter string: "; 
	cin.getline(sequence, SIZE); 

	// function call 

	frequency(sequence, SIZE); 

	return 0; 
}

// Function definition 

void frequency(char * characters, int length)
{
	char ch; 
	int i = 0; 
	int max = 0; 
	int anothermax = 0; 
	int j, counter; 

	while (characters[i] != '\0')
	i++; 

	const char * begin; 
	const char * end = characters + i; 

	for(begin = characters; begin != end; begin++)
	{
		j = 0; 
		counter = 0; 
		while(characters[j])
		{
			if ( *begin == characters[j])
				counter++;
			j++;
		}

		// condition 
		if(counter > max)
		{
			max = counter; 
			ch = *begin;
			anothermax = 0; 
		}
		else if(counter == max && ch != *begin)
			anothermax++;
	}
	// outputting number of times

	cout << "Max character is: " << ch << " which appears " << max << " times.\n";

	if(anothermax > 0)
		cout << "But there are other characters which appear the same amount of times.\n";

}