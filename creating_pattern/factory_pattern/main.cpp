#include"Factory.h"
#include"Product.h"
#include<iostream>

using namespace std;

int main()
{
    Factory* pf = new ConcreteFactory();
    Product* p = pf->create_product();
    return 0;
}
