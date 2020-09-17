#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Ware {

protected:
	string wareCode;
	double price;
public:
	Ware();
	Ware(string, double);
	virtual ~Ware();

	void SetWareCode(string);
	void SetPrice(double);
	string GetWareCode() const;
	double GetPrice() const;

	virtual void WareDisplay(ostream&);
	friend ostream &operator<<(ostream& , Ware& );

	Ware &operator++();		//prefix
	Ware &operator--();		//prefix
	Ware &operator++(int);	//postfix
	Ware &operator--(int);	//postfix

};

