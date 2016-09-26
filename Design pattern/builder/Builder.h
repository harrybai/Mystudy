#ifndef __BUILDER_H__
#define __BUILDER_H__

#include "string.h"
#include "stdio.h"
#include <string>
using namespace std;

class Product
{
public:
    Product();
    ~Product();

public:
    void SetPartA();
    void SetPartB();
    void SetPartC();

private:
    string m_strPartA;
    string m_strPartB;
    string m_strPartC;
};

class Builder
{
public:
    Builder();
    virtual ~Builder();
    
public:
    virtual Product *GetProduct() = 0;
    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;
    virtual void BuildPartC() = 0;

public:
    Product *m_product;
};

class ConcreBuilder1 : public Builder
{
public:
    ConcreBuilder1();
    ~ConcreBuilder1();
public:
    virtual Product *GetProduct();
    virtual void BuildPartA();
    virtual void BuildPartB();
    virtual void BuildPartC();
};

class ConcreBuilder2 : public Builder
{
public:
    ConcreBuilder2();
    ~ConcreBuilder2();
public:
    virtual Product *GetProduct();
    virtual void BuildPartA();
    virtual void BuildPartB();
    virtual void BuildPartC();
};

class Director
{
public:
    Director(Builder *builder);
    ~Director();
public:
    void Construct();

public:
    Builder *m_builder;
};

#endif //__BUILDER_H__
