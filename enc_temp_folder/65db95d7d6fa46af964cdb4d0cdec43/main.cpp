#include<iostream>
#include<vector>
#include<string>
#include "books.h"

using namespace std;

int main()
{
	vector<books> library;

	books temp_book;
	string temp_name;
	int temp_serial_number;

	char choice;

	do
	{
		cout << "Menu" << endl;
		cout << "1. View Books" << endl;
		cout << "2. Add Book" << endl;
		cout << "3. Remove Book" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter Choice: ";

		cin >> choice;

		switch (choice)
		{
		case'1':
			//View
			break;

		case'2':
			cout << "Enter Book Name: ";
			cin >> temp_name;

			cout << "Enter Serial Number: ";
			cin >> temp_serial_number;
			
			temp_book.book_name = temp_name;
			temp_book.serial_number = temp_serial_number;
			library.push_back(temp_book);
			break;

		case'3':
			//Remove
			break;

		case'4':
			cout << "Exiting..." << endl;
			break;
		default:
			cout << "Wrong Entry! Try Again." << endl;
		}
	} while (choice != '4');
	return 0;
}

