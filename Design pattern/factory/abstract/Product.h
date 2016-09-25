#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include "AbstractProduct.h"

class ProductA_1 : public AbstractProductA
{
public:
	ProductA_1();
	~ProductA_1();
	
public:
	virtual void opt();
};

class ProductA_2 : public AbstractProductA
{
public:
	ProductA_2();
	~ProductA_2();
	
public:
	virtual void opt();
};


class ProductB_1 : public AbstractProductB
{
public:
	ProductB_1();
	~ProductB_1();
	
public:
	virtual void opt();
};

class ProductB_2 : public AbstractProductB
{
public:
	ProductB_2();
	~ProductB_2();
	
public:
	virtual void opt();
};

#endif //__PRODUCT_H__
