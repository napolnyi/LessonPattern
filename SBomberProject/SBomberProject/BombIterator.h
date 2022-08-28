#pragma once
#include <iostream>
#include <vector>
#include "Bomb.h"

class BombIterator
{
private:
	std::vector<Bomb*> vecBombs;
	std::vector<DynamicObject*>& _vecDynamicObj;
	int curIndex;
	
public:
	
	BombIterator(std::vector<DynamicObject*>& vecDynamicObj): _vecDynamicObj(vecDynamicObj),curIndex(-1) {}
	BombIterator& operator ++() 
	{
		if (curIndex == -1) curIndex = 0;




	for (; curIndex < _vecDynamicObj.size(); curIndex++)
	{
		Bomb* pBomb = dynamic_cast<Bomb*>(_vecDynamicObj[curIndex]);
		if (pBomb != nullptr)
		{
			vecBombs.push_back(pBomb);
			ptr = &_vecDynamicObj[curIndex];
		}
	}
    }

};

