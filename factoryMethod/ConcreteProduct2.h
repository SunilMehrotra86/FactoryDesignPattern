#pragma once
#include "Product.h"
class ConcreteProduct2 :
    public Product
{
public:
    ConcreteProduct2();
    ~ConcreteProduct2();

    // Inherited via Product
    virtual void operation() override;
};

