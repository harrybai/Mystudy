#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include "AbstractProduct.h"

class ProductA : public AbstractProduct
{
public:
	ProductA();
	~ProductA();
	
public:
	virtual void opt();
};

class ProductB : public AbstractProduct
{
public:
	ProductB();
	~ProductB();
	
public:
	virtual void opt();
};

#endif //__PRODUCT_H__
