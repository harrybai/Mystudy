#include "stdio.h"
#include "SimpleFactory.h"

int main()
{
	AbstractFactory *pFactory = new SimpleFactory;
	AbstractProduct *pProduct1 = pFactory->CreateProduct(1);
	AbstractProduct *pProduct2 = pFactory->CreateProduct(2);
	pProduct1->opt();
	pProduct2->opt();
	delete pProduct1;
	delete pProduct2;
	delete pFactory;
	return 0;
}
