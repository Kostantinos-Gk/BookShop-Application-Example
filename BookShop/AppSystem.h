#pragma once
#include "Ware.h"
#include "Book.h"
#include "SchoolWare.h"
#include <list>
#include <string>
#include <iomanip>

using namespace std;

class AppSystem{
private:
	list <Ware*> listWare;
public:
	AppSystem();
	~AppSystem();

	void AddWare(Ware *);
	void Display(ostream &);
	void Raiseprices();
	void Lowprices();

	void displayTitleEfficient(ostream &os);
};

