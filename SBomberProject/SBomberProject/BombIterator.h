#pragma once
#include <iostream>
#include <vector>
#include "Bomb.h"

class BombIterator
{
//private:
//
//	std::vector<DynamicObject*> _vecDynamicObj;
//	int curIndex;
//	Bomb* ptr;
//
//public:
//
//	BombIterator(std::vector<DynamicObject*>& vecDynamicObj) : _vecDynamicObj(vecDynamicObj), curIndex(-1), ptr(nullptr) {}
//	void reset();
//	BombIterator& operator ++();
//	BombIterator& operator --();
//	void operator =(Bomb* val);
//	DynamicObject* operator *();
//	DynamicObject operator ->();
//	bool operator ==(BombIterator it);
//	bool operator !=(BombIterator it);

private:

	Bomb** ptr;

public:

	BombIterator(DynamicObject* DynamicObj) { *ptr = (dynamic_cast<Bomb*>(DynamicObj)); }
	void operator ++();
	void operator --();
	void operator =(Bomb* val);
	Bomb* operator *();
	bool operator ==(BombIterator it);
	bool operator !=(BombIterator it);


};