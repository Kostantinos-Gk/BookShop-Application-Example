#pragma once
#include "Ware.h"
class Book : public Ware{
private:
	string bookTitle;
public:
	Book(string, double, string);
	Book();
	~Book();

	void SetBookTitle(string);
	string GetBookTitle() const;

	virtual void WareDisplay(ostream&);
	friend ostream& operator<<(ostream&, Book&);
};

