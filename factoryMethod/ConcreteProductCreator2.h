#pragma once
#include "Creator.h"
class ConcreteProductCreator2 :
    public Creator
{
public:
    ConcreteProductCreator2();
    void AnOperation() override;
    ~ConcreteProductCreator2();

    // Inherited via Creator
    virtual Product * Create() override;
};

