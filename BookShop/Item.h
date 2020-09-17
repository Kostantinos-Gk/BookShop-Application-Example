#pragma once
#include "Ware.h"
#include "SchoolWare.h"
#include "Book.h"
#include <list>
#include<iostream>

using namespace std;

template <typename T>
class Item {
public:
	list <T *> listWare;
public:
	Item();
	~Item();

	void AddWare(T *);
	void Display();
};
