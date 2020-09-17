#include "Book.h"

Book::Book(string wareCode, double price, string bookTitle):Ware(wareCode,price){
	this->bookTitle = bookTitle;
}

Book::Book():Ware(){
	bookTitle = "Unknown";
}

Book::~Book(){

}

void Book::SetBookTitle(string bookTitle){
	this->bookTitle = bookTitle;
}

string Book::GetBookTitle() const
{
	return string(bookTitle);
}

void Book::WareDisplay(ostream& os) {
	const int totalWidth = 70;
	const int field1Width = 10; // wareCode
	const int field2Width = 10; // price
	const int field3Width = 30; // name-title
	const int field4Width = 20; // object

	os << setw(field4Width) << left << "Book" << setw(field1Width) << left << GetWareCode() << setw(field3Width) << left
		<< GetBookTitle() << setw(field4Width) << left << GetPrice() << endl;
}

ostream& operator<<(ostream& os, Book& right){
	right.WareDisplay(os);
	return os;
}
