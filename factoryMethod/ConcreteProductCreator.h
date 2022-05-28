#pragma once
#include "Creator.h"
class ConcreteProductCreator :
    public Creator
{
public:
    ConcreteProductCreator();
    void AnOperation() override;
    ~ConcreteProductCreator();

    // Inherited via Creator
    virtual Product * Create() override;
};

