#include "stdio.h"
#include "Factory.h"

int main()
{
	printf("************* Abstract Factory mode *******************\n");
	AbstractFactory *pFactory1 = new Factory1;
	AbstractFactory *pFactory2 = new Factory2;
	AbstractProductA *pProductA_1 = pFactory1->CreateProductA();
	AbstractProductB *pProductB_1 = pFactory1->CreateProductB();
	pProductA_1->opt();
	pProductB_1->opt();
	delete pProductA_1;
	delete pProductB_1;
	
	AbstractProductA *pProductA_2 = pFactory2->CreateProductA();
	AbstractProductB *pProductB_2 = pFactory2->CreateProductB();
	pProductA_2->opt();
	pProductB_2->opt();
	delete pProductA_2;
	delete pProductB_2;
	
	delete pFactory1;
	delete pFactory2;

	return 0;
}
