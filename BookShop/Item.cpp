#include "Item.h"
template<typename T>
inline Item<T>::Item() {

}

template<typename T>
Item<T>::~Item() {
	for (typename::list <Item<T>*>::const_iterator it = listWare.begin(); it != listWare.end(); ++it)
	{
		delete* it;
	}
	listWare.clear();
}

template<typename T>
inline void Item<T>::AddWare(T* t) {
	listWare.push_back(t);
}

template<typename T>
void Item<T>::Display() {
	typename::list <T*>::iterator it;
	it = listWare.begin();
	while (it != listWare.end()) {
		(*it)->WareDisplay(cout);
		it++;
	}
}