#include "Factory.h"
#include "Product.h"
#include "stdio.h"

FactoryA::FactoryA()
{
	
}

FactoryA::~FactoryA()
{
	
}

AbstractProduct *FactoryA::CreateProduct()
{
	return new ProductA;
}


FactoryB::FactoryB()
{
	
}

FactoryB::~FactoryB()
{
	
}

AbstractProduct *FactoryB::CreateProduct()
{
	return new ProductB;
}
