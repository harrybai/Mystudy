#ifndef __ABSTRACTPRODUCT_H__
#define __ABSTRACTPRODUCT_H__

class AbstractProductA
{
public:
	AbstractProductA();
	~AbstractProductA();
	
public:
	virtual void opt() = 0;
};


class AbstractProductB
{
public:
	AbstractProductB();
	~AbstractProductB();
	
public:
	virtual void opt() = 0;
};

#endif //__ABSTRACTPRODUCT_H__