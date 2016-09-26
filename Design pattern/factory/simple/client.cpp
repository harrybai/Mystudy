#include "stdio.h"
#include "SimpleFactory.h"
#include "Factory.h"

int main()
{
	printf("************* SimpleFactory mode *******************\n");
	AbstractFactory *pFactory = new SimpleFactory;
	AbstractProduct *pProduct1 = pFactory->CreateProduct(1);
	AbstractProduct *pProduct2 = pFactory->CreateProduct(2);
	pProduct1->opt();
	pProduct2->opt();
	delete pProduct1;
	delete pProduct2;
	delete pFactory;
	
	printf("************* Factory mode *******************\n");
	AbstractFactory2 *pFactoryA = new FactoryA;
	AbstractFactory2 *pFactoryB = new FactoryB;
	AbstractProduct *pProductA = pFactoryA->CreateProduct();
	AbstractProduct *pProductB = pFactoryB->CreateProduct();
	pProductA->opt();
	pProductB->opt();
	delete pProductA;
	delete pProductB;
	delete pFactoryA;
	delete pFactoryB;
	return 0;
}
