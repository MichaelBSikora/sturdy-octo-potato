// Display contents of inventory file
#include <iostream>
#include <fstream>
using namespace std; 

const int DESC_SIZE = 31;  // Description size

// Structure declaration 
struct InventoryItem
{
	char desc[DESC_SIZE];
	int qty;
	double price;
};

int main()
{
	InventoryItem record; // To hold an inventory record

	// Open file for binary input 
	fstream inventory("Inventory.dat", ios::in | ios::binary);

	// Now read and display the records
	inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
	while(!inventory.eof())
	{
		cout << "Description: ";
		cout << record.desc << endl;
		cout << "Quantity: ";
		cout << record.qty << endl;
		cout << "Price: ";
		cout << record.price << endl << endl;
		inventory.read(reinterpret_cast< char *>(&record), sizeof(record));
	}
	// Close the file. 
	inventory.close();
	return 0;
}