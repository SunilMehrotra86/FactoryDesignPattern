#pragma once
class Product;

class Creator
{
public:

    Product * m_PtrProduct;
    virtual Product * Create() = 0;
    virtual void AnOperation();
    ~Creator();
};

