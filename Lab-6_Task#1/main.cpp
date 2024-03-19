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
		cout << "\n---------- MENU ----------" << endl;
		cout << "1. View Books" << endl;
		cout << "2. Add Book" << endl;
		cout << "3. Remove Book" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter Choice: ";

		cin >> choice;
		bool removed = false;
		bool serialExists = false;

		switch (choice)
		{
		case '1':
			temp_book.display(library);
			break;


		case '2':
			cout << "Enter Book Name: ";
			cin.ignore();
			getline(cin, temp_name);

			cout << "Enter Serial Number: ";
			cin >> temp_serial_number;

			// Check if the entered serial number already exists in the library
			for (const auto& book : library) {
				if (book.serial_number == temp_serial_number) {
					serialExists = true;
					break;
				}
			}

			if (serialExists) {
				cout << "A book with the same serial number already exists in the library. Please enter a different serial number." << endl;
			}
			else {
				temp_book.book_name = temp_name;
				temp_book.serial_number = temp_serial_number;
				library.push_back(temp_book);
				cout << "Book added successfully!" << endl;
			}

			break;

		case '3':
			cout << "Enter Serial Number of the Book to Remove: ";
			cin >> temp_serial_number;

			removed = temp_book.removeBook(library, temp_serial_number);
			if (removed) {
				cout << "Book removed successfully!" << endl;
			} else {
				cout << "Book with serial number " << temp_serial_number << " not found!" << endl;
			}
			break;

		case '4':
			cout << "Exiting..." << endl;
			break;
		default:
			cout << "Wrong Entry! Try Again." << endl;
		}
	} while (choice != '4');
	return 0;
}

