#pragma once
#include <iostream>
#include <vector>
#include "Bomb.h"

class BombIterator
{
private:

	std::vector<DynamicObject*> _vecDynamicObj;
	int curIndex;
	Bomb* ptr;

public:

	BombIterator(std::vector<DynamicObject*>& vecDynamicObj) : _vecDynamicObj(vecDynamicObj), curIndex(-1), ptr(nullptr) {}
	void reset();
	BombIterator& operator ++();
	BombIterator& operator --();
	DynamicObject* operator *();
	bool operator ==(BombIterator it);
	bool operator !=(BombIterator it);



};