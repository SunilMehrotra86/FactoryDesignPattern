#pragma once
#include "Product.h"
class ConcreteProduct :
    public Product
{
public:
    ConcreteProduct();
    ~ConcreteProduct();

    // Inherited via Product
    virtual void operation() override;
};

