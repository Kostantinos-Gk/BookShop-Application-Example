#pragma once
#include "Ware.h"
class SchoolWare : public Ware{
private:
	string name;
public:
	SchoolWare(string, double, string);
	SchoolWare();
	~SchoolWare();

	void SetName(string);
	string GetName() const;

	virtual void WareDisplay(ostream&);
	friend ostream& operator<<(ostream&, SchoolWare&);
};

