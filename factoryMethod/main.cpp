#include<iostream>
#include "Creator.h"
#include "ConcreteProductCreator.h"
#include "ConcreteProductCreator2.h"

int main()
{
    ConcreteProductCreator prod;
    prod.AnOperation();
    //ins.AnOperation();
    system("Pause");
    return 0;
}