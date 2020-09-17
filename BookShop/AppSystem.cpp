#include "AppSystem.h"

AppSystem::AppSystem(){

}

AppSystem::~AppSystem(){
	for (list<Ware *>::const_iterator it = listWare.begin(); it != listWare.end(); ++it)
	{
		delete* it;
	}
	listWare.clear();
}

void AppSystem::AddWare(Ware* ware){
	listWare.push_back(ware);
}

void AppSystem::Display(ostream &os){
	displayTitleEfficient(os);
	list <Ware *>::iterator it;
	it = listWare.begin();
	while (it != listWare.end()) {
		(*it)->WareDisplay(os);
		it++;
	}
}

void AppSystem::Raiseprices(){
	list <Ware*>::iterator it;
	it = listWare.begin();
	while (it != listWare.end()) {
		if (dynamic_cast<Book*> (*it))
				(**it)++;
		it++;
	}
}

void AppSystem::Lowprices(){
	list <Ware*>::iterator it;
	it = listWare.begin();
	while (it != listWare.end()) {
		if (dynamic_cast<SchoolWare*> (*it))
		(**it)--;
		it++;
	}
}

void AppSystem::displayTitleEfficient(ostream& os){
	//extra variables for display
	const int totalWidth = 70;
	const int field1Width = 10; // wareCode
	const int field2Width = 10; // price
	const int field3Width = 30; // name-title
	const int field4Width = 20; // object

	string title = "Book Shop Warehouse";
	int title_length = title.length();

	os << setw((totalWidth - title_length) / 2) << "" << title << endl;
	os << endl;
	os << setw(field4Width) << left << "Item" << setw(field1Width) << left << "Code" << setw(field3Width)
		<< left << "Title - Name" << setw(field2Width) << left << "Price" << endl;

	os << setw(totalWidth) << setfill('-') << "" << endl;
	
	os << setfill(' '); //reset setfill to blank spaces

	os << setprecision(2) << fixed; //display the float numbers with to demical digits

}
