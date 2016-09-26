#ifndef __ABSTRACTFACTORY_H__
#define __ABSTRACTFACTORY_H__

#include "AbstractProduct.h"

class AbstractFactory
{
public:
	AbstractFactory();
	~AbstractFactory();
	
public:
	virtual AbstractProductA *CreateProductA()=0;
	virtual AbstractProductB *CreateProductB()=0;
};

#endif //__ABSTRACTFACTORY_H__