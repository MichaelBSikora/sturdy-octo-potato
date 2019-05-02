// This program gathers statistical data about the number
// of movies college students see in a month. 
// It displays the mean, median, and mode of values enetered
// by the user.

// Note: negative numbers cannot be accepted as input. 


#include <iostream>
using namespace std; 

// Function prototypes 

double Median(int [], int); 
int Mode(int[], int); 
double Mean(int[], int); 

// Function main

int main()
{
	int n, i, j, temp; 
	int *movies; 

	// Prompt user input 

	cout << "Enter number of students surveyed: ";
	cin >> n; 

	movies = new int[n];

	cout << "Enter the number of movies seen by each student: "; 
	for (i = 0; i < n; i++)
	{
		cin >> movies[i]; 
	}

	// Sort values 
	for (i = 0; i < n; i++)
	{
		for (j = (i + 1); j < (n - 1); j++)
		{
			if (movies[i] > movies[j])
			{

				// swap value
				temp = movies[i]; 
				movies[i] = movies[j];
				movies[j] = temp; 
			}
		}
	}

	// Function calls

	double average = Mean(movies, n); 
	double med = Median(movies, n); 
	double mod = Mode(movies, n); 

	cout << "Mean of Array: " << average << endl; 
	cout << "Median of Array: " << med << endl; 
	cout << "Mode of Array: " << mod << endl; 

	return 0;
}

// Function definitions 

double Median(int numbers[], int size)
{
	double med; 
	if (size%2==0)
		med = (double) (numbers[size/2]+numbers[size/2-1])/2; 
	else
		med = numbers[size/2];
	return med; 
}

int Mode(int slices[], int size)
{

	// variables to track count and mode
	int counter, mode = 0; 

	// loop 

	for (int i = 0; i < size; i++)
	{
		counter = 1; 
		while (slices[i] == slices[i+1])
		{
			counter++;
			i++;
		}
		if (counter > mode)
			mode = slices[i];
		if (counter > 1)
			i--; 
	}

	return mode; 
}

double Mean(int movies[], int size)
{
	double mean = 0; 
	for (int i = 0; i < size; i++)
		mean += movies[i];
	mean /= size; 
	return mean; 
}
