#pragma once
#include "Visitor.h"


class LogVisitor :
    public Visitor
{
public:

    LogVisitor() {}
    ~LogVisitor() {}

    void _fastcall log(Bomb* pBomb) const  override;

    void _fastcall log(Plane* pPlane) const override;
};

