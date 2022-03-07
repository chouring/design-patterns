#include<iostream>
#include"Product.h"
using std::cout;

Product::Product(){}

Product::~Product(){}

ConcreteProduct::ConcreteProduct()
{
    puts("a concrete product is created");
}

ConcreteProduct::~ConcreteProduct(){}
