#include "BombIterator.h"


void BombIterator::reset()
{
	curIndex = -1; 
	ptr = nullptr;
}

BombIterator& BombIterator::operator++()
{
	curIndex++;
	if (curIndex == -1) curIndex = 0;

	for (; curIndex < _vecDynamicObj.size(); curIndex++) 
	{
		Bomb* pBomb = dynamic_cast<Bomb*>(_vecDynamicObj[curIndex]);
			if (pBomb != nullptr)
				{
					ptr = pBomb;
					break;
		        }
	}

	if (curIndex == _vecDynamicObj.size()) 
	{
		curIndex = -1;
		ptr = nullptr;
	}
	return *this;
}

BombIterator& BombIterator::operator--()
{
	curIndex++;
	if (curIndex == -1) curIndex = _vecDynamicObj.size()-1;

	for (; curIndex >= 0; curIndex--)
	{
		Bomb* pBomb = dynamic_cast<Bomb*>(_vecDynamicObj[curIndex]);
		if (pBomb != nullptr)
		{
			ptr = pBomb;
			break;
		}
	}

	if (curIndex == _vecDynamicObj.size())
	{
		curIndex = -1;
		ptr = nullptr;
	}
	return *this;
}

DynamicObject* BombIterator::operator*()
{
	//return dynamic_cast<Bomb*>(_vecDynamicObj.at(curIndex));
	return _vecDynamicObj.at(curIndex);
}

bool BombIterator::operator==(BombIterator it)
{
	return *this == it;
}

bool BombIterator::operator!=(BombIterator it)
{
	return !(* this == it);
}
