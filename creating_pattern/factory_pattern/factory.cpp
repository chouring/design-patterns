#include<iostream>
#include"Factory.h"
#include"Product.h"

using std::cout;

Factory::Factory(){}

Factory:~Factory(){}

ConcreteFactory::ConcreteFactory()
{
    puts("a concrete_factory is created");
}

ConcreteFactory::~ConcreteFactory(){}

Product* ConcreteFactory::create_product()
{
    return new ConcreteProduct();
}
