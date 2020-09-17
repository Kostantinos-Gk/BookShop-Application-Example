#include "Ware.h"

Ware::Ware(){
	wareCode = "000000";
	price = 0.0;
}

Ware::Ware(string wareCode, double price){
	this->wareCode = wareCode;
	this->price = price;
}

Ware::~Ware(){
}

void Ware::SetWareCode(string wareCode){
	this->wareCode = wareCode;
}

void Ware::SetPrice(double price){
	this->price = price;
}

string Ware::GetWareCode() const
{
	return string(wareCode);
}

double Ware::GetPrice() const
{
	return price;
}
void Ware::WareDisplay(ostream& left) {
	left << "Ware, [ " << "Ware ID : " << GetWareCode() << ", " << "Price : " << GetPrice() << "$ ]" << endl;
}
Ware& Ware::operator++()
{
	price = price * 1.10;
	return *this;
}
Ware& Ware::operator--()
{
	price = price * 0.95;
	return *this;
}
Ware& Ware::operator++(int) {
	Ware temp = *this;
	price = price * 1.10;
	return temp;
}
Ware& Ware::operator--(int) {
	Ware temp = *this;
	price = price * 0.95;
	return temp;
}
ostream& operator<<(ostream& left, Ware& right) {
	right.WareDisplay(left);
	return left;
}