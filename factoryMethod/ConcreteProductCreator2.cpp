#include "ConcreteProductCreator2.h"
#include "ConcreteProduct2.h"
#include<iostream>



ConcreteProductCreator2::ConcreteProductCreator2()
{
}

void ConcreteProductCreator2::AnOperation()
{
    std::cout << __FUNCSIG__ << std::endl;
}


ConcreteProductCreator2::~ConcreteProductCreator2()
{
}

Product * ConcreteProductCreator2::Create()
{
    return new ConcreteProduct2;
}
