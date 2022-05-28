#include "ConcreteProductCreator.h"
#include "ConcreteProduct.h"
#include<iostream>


ConcreteProductCreator::ConcreteProductCreator()
{
}

void ConcreteProductCreator::AnOperation()
{
    std::cout << __FUNCSIG__ << std::endl;
}


ConcreteProductCreator::~ConcreteProductCreator()
{
}

Product * ConcreteProductCreator::Create()
{
    return new ConcreteProduct;
}
