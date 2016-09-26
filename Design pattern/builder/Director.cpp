#include "Builder.h"

Product::Product()
{
}

Product::~Product()
{
}

void Product::SetPartA()
{
    m_strPartA = "part A";
}

void Product::SetPartB()
{
    m_strPartB = "part B";
}

void Product::SetPartC()
{
    m_strPartC = "part C";
}


Builder::Builder()
{
}

Builder::~Builder()
{
}

ConcreBuilder1::ConcreBuilder1()
{
    m_product = new Product;
    printf("create builder1 empty product!\n");
}

ConcreBuilder1::~ConcreBuilder1()
{
}

void ConcreBuilder1::BuildPartA()
{
    m_product->SetPartA();
    printf("build builder1 Part A!\n");
}

void ConcreBuilder1::BuildPartB()
{
    m_product->SetPartB();
    printf("build builder1 Part B!\n");
}

void ConcreBuilder1::BuildPartC()
{
    m_product->SetPartC();
    printf("build builder1 Part C!\n");
}

Product *ConcreBuilder1::GetProduct()
{
    return m_product;
}


ConcreBuilder2::ConcreBuilder2()
{
    m_product = new Product;
    printf("create builder2 empty product!\n");
}

ConcreBuilder2::~ConcreBuilder2()
{
}

void ConcreBuilder2::BuildPartA()
{
    m_product->SetPartA();
    printf("build builder2 Part A!\n");
}

void ConcreBuilder2::BuildPartB()
{
    m_product->SetPartB();
    printf("build builder2 Part B!\n");
}

void ConcreBuilder2::BuildPartC()
{
    m_product->SetPartC();
    printf("build builder2 Part C!\n");
}

Product *ConcreBuilder2::GetProduct()
{
    return m_product;
}


Director::Director(Builder *builder)
{
    m_builder = builder;
}

Director::~Director()
{
}

void Director::Construct()
{
    m_builder->BuildPartA();
    m_builder->BuildPartB();
    m_builder->BuildPartC();
}









