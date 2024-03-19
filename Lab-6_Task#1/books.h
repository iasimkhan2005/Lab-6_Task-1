#pragma once
#include<iostream>
#include<string>
using namespace std;

class books
{
public:
	string book_name;
	int serial_number;

	// Add Book
	void addBook(vector<books>& library, books book)
	{
		library.push_back(book);
	}

	// Remove Book
	bool removeBook(vector<books>& library, int sn){
		for (int i = 0; i < library.size(); i++) {
			if (library[i].serial_number == sn) {
				library.erase(library.begin() + i); //remove from vector at index 'i'
				return true;
			}
		}
		return false; //If no such book is found in the library
	}
	
	void searchBook(vector<books>& library,int serial_num) {
		for (int i = 0; i < library.size(); i++) {
			if (library[i].serial_number == serial_num) {
				cout << library[i].book_name << endl;
			}
		}
	}

	
	// Display
	void display(vector<books>& library){
		for (int i = 0; i < library.size(); i++) {
            cout << library[i].book_name << endl;
        }
	}
};


