//-------------------------------------------------------------------------------------
//rectangle.cpp                       
//                
//2023.11.19  by Wulong
//-------------------------------------------------------------------------------------
#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle()
	:p1(), p2()
{
};

Rectangle::Rectangle(const Point& a, const Point& b)
	:p1(a), p2(b)
{
};

Rectangle::Rectangle(const Rectangle& other)
	:p1(other.p1), p2(other.p2)
{
}

Rectangle::~Rectangle()
{
	std::cout << "나 사각형 제대로 소멸하고 있니?" << '\n';
}

void Rectangle::draw() const
{
	std::cout << "사각형 - (" << p1.x << "," << p1.y << "), (" 
		<< p2.x << "," << p2.y << ")" << '\n';
};