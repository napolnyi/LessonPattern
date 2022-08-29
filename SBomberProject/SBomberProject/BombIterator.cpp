#include "BombIterator.h"


void BombIterator::operator++()
{
	ptr++;
}

void BombIterator::operator--()
{
	ptr--;
}

void BombIterator::operator=(Bomb* val)
{
	*ptr = val;
}

Bomb* BombIterator::operator*()
{
	return *ptr;
}


bool BombIterator::operator==(BombIterator it)
{
	return *this==it;
}

bool BombIterator::operator!=(BombIterator it)
{
	return !(*this == it);
}
