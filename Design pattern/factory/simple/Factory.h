#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "AbstractFactory.h"

class FactoryA : public AbstractFactory2
{
public:
	FactoryA();
	~FactoryA();
	
public:
	virtual AbstractProduct *CreateProduct();
};

class FactoryB : public AbstractFactory2
{
public:
	FactoryB();
	~FactoryB();
	
public:
	virtual AbstractProduct *CreateProduct();
};

#endif //__SIMPLEFACTORY_H__