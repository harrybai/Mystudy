#include "SimpleFactory.h"
#include "Product.h"
#include "stdio.h"

SimpleFactory::SimpleFactory()
{
	
}

SimpleFactory::~SimpleFactory()
{
	
}

AbstractProduct *SimpleFactory::CreateProduct(int type)
{
	AbstractProduct *pProduct = NULL;
	switch(type)
	{
	case 1:
		pProduct = new ProductA;
		break;
	case 2:
		pProduct = new ProductB;
		break;
	default:
		break;
	}
	return pProduct;
}
