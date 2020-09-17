#include "SchoolWare.h"

SchoolWare::SchoolWare(string wareCode, double price, string name):Ware(wareCode,price){
	this->name = name;
}

SchoolWare::SchoolWare():Ware(){
	name = "Unknown";
}

SchoolWare::~SchoolWare(){

}

void SchoolWare::SetName(string name){
	this->name = name;
}

string SchoolWare::GetName() const
{
	return string(name);
}

void SchoolWare::WareDisplay(ostream& os)
{
	const int totalWidth = 70;
	const int field1Width = 10; // wareCode
	const int field2Width = 10; // price
	const int field3Width = 30; // name-title
	const int field4Width = 20; // object

	os <<  setw(field4Width) << left <<"School Item"<< setw(field1Width) << left << GetWareCode() << setw(field3Width) << left
	   << GetName() << setw(field4Width) << left << GetPrice() << endl;
}

ostream& operator<<(ostream& os, SchoolWare& right){
	right.WareDisplay(os);
	return os;
}
