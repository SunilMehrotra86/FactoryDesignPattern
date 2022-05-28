#include "ConcreteProduct.h"
#include <iostream>


ConcreteProduct::ConcreteProduct()
{
}


ConcreteProduct::~ConcreteProduct()
{
}

void ConcreteProduct::operation()
{
    std::cout << __FUNCSIG__ << std::endl;
}
