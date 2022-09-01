#include "BombIterator.h"


//void BombIterator::reset()
//{
//	curIndex = -1; 
//	ptr = nullptr;
//}

BombIterator& BombIterator::operator++()
{
	
	for (size_t i = curIndex; i < _vecDynamicObj.size()-1;i++)
	{
		Bomb* pBomb = dynamic_cast<Bomb*>(_vecDynamicObj[i+1]);
		if (pBomb != nullptr)
		{
			curIndex = i+1;
			break;
		}
	}
	if (curIndex = _vecDynamicObj.size()-1) 
	{
		curIndex = -1;
	}
	return *this;
}

BombIterator& BombIterator::operator--()
{
	
	for (size_t i = _vecDynamicObj.size(); i >=0 ; i--)
	{
		Bomb* pBomb = dynamic_cast<Bomb*>(_vecDynamicObj[i]);
		if (pBomb != nullptr)
		{
			curIndex = i;
			break;
		}
	}
	return *this;
}



//BombIterator& BombIterator::operator++()
//{
//	curIndex++;
//	if (curIndex == -1) curIndex = 0;
//
//	for (; curIndex < _vecDynamicObj.size(); curIndex++) 
//	{
//		Bomb* pBomb = dynamic_cast<Bomb*>(_vecDynamicObj[curIndex]);
//			if (pBomb != nullptr)
//				{
//					ptr = pBomb;
//					break;
//		        }
//	}
//
//	if (curIndex == _vecDynamicObj.size()) 
//	{
//		curIndex = -1;
//		ptr = nullptr;
//	}
//	return *this;
//}

//BombIterator& BombIterator::operator--()
//{
//	curIndex++;
//	if (curIndex == -1) curIndex = _vecDynamicObj.size()-1;
//
//	for (; curIndex >= 0; curIndex--)
//	{
//		Bomb* pBomb = dynamic_cast<Bomb*>(_vecDynamicObj[curIndex]);
//		if (pBomb != nullptr)
//		{
//			ptr = pBomb;
//			break;
//		}
//	}
//
//	if (curIndex == _vecDynamicObj.size())
//	{
//		curIndex = -1;
//		ptr = nullptr;
//	}
//	return *this;
//}

Bomb* BombIterator::operator*()
{
	return dynamic_cast<Bomb*>(_vecDynamicObj.at(curIndex));
	
}

bool BombIterator::operator==(BombIterator it)
{
	if (curIndex == it.curIndex && _vecDynamicObj == it._vecDynamicObj)
	{
		return true;
	}
	return false;
}

bool BombIterator::operator<=(BombIterator it)
{
	if (curIndex <= it.curIndex && _vecDynamicObj == it._vecDynamicObj && curIndex != 0 && curIndex !=-1 )
	{
		return true;
	}
	return false;
}

//bool BombIterator::operator==(BombIterator it)
//{
//	if (curIndex == it.curIndex && ptr == it.ptr && _vecDynamicObj == it._vecDynamicObj) 
//	{
//		return true;
//	}
//	return false;
//}

bool BombIterator::operator!=(BombIterator it)
{
	return !(* this == it);
}

void BombIterator::begin()
{
	for (size_t i = 0; i < _vecDynamicObj.size(); i++)
	{
		Bomb* pBomb = dynamic_cast<Bomb*>(_vecDynamicObj[i]);
		if (pBomb != nullptr)
		{
			curIndex = i;
			break;
		}
	}
}

void BombIterator::end()
{
	for (size_t i = 0; i < _vecDynamicObj.size(); i++)
	{
		Bomb* pBomb = dynamic_cast<Bomb*>(_vecDynamicObj[i]);
		if (pBomb != nullptr)
		{
			curIndex = i;
			
		}
	}
}


