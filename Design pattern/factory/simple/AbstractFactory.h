#ifndef __ABSTRACTFACTORY_H__
#define __ABSTRACTFACTORY_H__

#include "AbstractProduct.h"

class AbstractFactory
{
public:
	AbstractFactory();
	~AbstractFactory();
	
public:
	virtual AbstractProduct *CreateProduct(int type)=0;
};

class AbstractFactory2
{
public:
	AbstractFactory2();
	~AbstractFactory2();
	
public:
	virtual AbstractProduct *CreateProduct()=0;
};

#endif //__ABSTRACTFACTORY_H__