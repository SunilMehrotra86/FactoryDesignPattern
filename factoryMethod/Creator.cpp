#include "Creator.h"
#include "ConcreteProduct.h"



void Creator::AnOperation()
{
    m_PtrProduct = Create();
    m_PtrProduct->operation();
}

Creator::~Creator()
{
}
