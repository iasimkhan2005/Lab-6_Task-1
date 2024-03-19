#pragma once
#include<iostream>
#include<string>
using namespace std;

class books
{
public:
	string book_name;
	int serial_number;

	void addBook(vector<books>& library, books book)
	{
		library.push_back(book);
	}

	//void removeBook(books serial_number);
	
	//void searchBook(books book);
	
	//void display();
};

