#ifndef _FACTORY_H_
#define _FACTORY_H_

class Product;

class Factory
{
public:
    virtual ~Factory() = 0;
    virtual Product* create_product() = 0;
protected:
    Factory();
};

class ConcreteFactory:public Factory
{
public:
    ~ConcreteFactory();
    ConcreteFactory();
    Product* create_product();
}

#endif
