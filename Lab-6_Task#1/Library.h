#pragma once
class Library
{
	
public:
	Library();
	~Library();
	vector<books> book;

	void addBook(books book, books serial_number);
	void removeBook(books serial_number);
	void searchBook(books book);
	
	

};

