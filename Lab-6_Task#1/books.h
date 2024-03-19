#pragma once
#include "Library.h"
class books :
    public Library
{
	string book_name;
	int serial_number;
public:
	void addBook(books book, books serial_number);
	void removeBook(books serial_number);
	void searchBook(books book);
};

