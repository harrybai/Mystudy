#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "AbstractFactory.h"

class Factory1 : public AbstractFactory
{
public:
	Factory1();
	~Factory1();
	
public:
	virtual AbstractProductA *CreateProductA();
	virtual AbstractProductB *CreateProductB();
};

class Factory2 : public AbstractFactory
{
public:
	Factory2();
	~Factory2();
	
public:
	virtual AbstractProductA *CreateProductA();
	virtual AbstractProductB *CreateProductB();
};

#endif //__SIMPLEFACTORY_H__