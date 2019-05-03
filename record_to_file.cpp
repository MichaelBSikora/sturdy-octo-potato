// Use structure variable to store a record to a file
#include <iostream>
#include <fstream>
using namespace std; 

const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14; 

struct Info
{
	char name[NAME_SIZE];
	int age;
	char address1[ADDR_SIZE];
	char address2[ADDR_SIZE];
	char phone[PHONE_SIZE];
};

int main()
{
	Info person;     // To hold info about a person
	char again; 	// to hold Y or N

	// Open file for binary output
	fstream people("people.dat", ios::out | ios::binary);

	do
	{
		//Get data about a person
		cout << "Enter the following data about a person: \n";
		cout << "Name: ";
		cin.getline(person.name, NAME_SIZE);
		cout << "Age: ";
		cin >> person.age;
		cin.ignore(); // Skip over remaining newline. 
		cout << "Address line 1: ";
		cin.getline(person.address1, ADDR_SIZE);
		cout << "Address line 2: ";
		cin.getline(person.address2, ADDR_SIZE);
		cout << "Phone: ";
		cin.getline(person.phone, PHONE_SIZE);

		// Write the contents to the file 
		people.write(reinterpret_cast<char *>(&person), sizeof(person));

		// Determine whether the user wants to write another record. 
		cout << "Do you want to enter another record? ";
		cin >> again;
		cin.ignore(); // Skip over reminaing newline
	} while (again == 'Y' || again == 'y');
	// Close the file
	people.close();
	return 0;
}

	
