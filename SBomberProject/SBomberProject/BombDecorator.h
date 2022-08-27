#pragma once
#include "DynamicObject.h"
#include "Bomb.h"

class BombDecorator :
    public DynamicObject
{
public:
    void Draw() const override;
    void Move(uint16_t time) override;
    
    BombDecorator(Bomb* bomb) : _bomb(bomb) {};

private:
    Bomb* _bomb;
 
};

