#ifndef __ABSTRACTPRODUCT_H__
#define __ABSTRACTPRODUCT_H__

class AbstractProduct
{
public:
	AbstractProduct();
	~AbstractProduct();
	
public:
	virtual void opt() = 0;
};

#endif //__ABSTRACTPRODUCT_H__