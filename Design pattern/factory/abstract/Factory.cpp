#include "Factory.h"
#include "Product.h"
#include "stdio.h"

Factory1::Factory1()
{
	
}

Factory1::~Factory1()
{
	
}

AbstractProductA *Factory1::CreateProductA()
{
	return new ProductA_1;
}

AbstractProductB *Factory1::CreateProductB()
{
	return new ProductB_1;
}


Factory2::Factory2()
{
	
}

Factory2::~Factory2()
{
	
}

AbstractProductA *Factory2::CreateProductA()
{
	return new ProductA_2;
}

AbstractProductB *Factory2::CreateProductB()
{
	return new ProductB_2;
}
