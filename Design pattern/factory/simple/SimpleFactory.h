#ifndef __SIMPLEFACTORY_H__
#define __SIMPLEFACTORY_H__

#include "AbstractFactory.h"

class SimpleFactory : public AbstractFactory
{
public:
	SimpleFactory();
	~SimpleFactory();
	
public:
	virtual AbstractProduct *CreateProduct(int type);
};

#endif //__SIMPLEFACTORY_H__