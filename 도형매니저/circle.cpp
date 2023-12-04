//-------------------------------------------------------------------------------------
//Circle.cpp   
//               
//2023.11.19  by Wulong
//-------------------------------------------------------------------------------------
#include <iostream>
#include "circle.h"

Circle::Circle()
	:center(), rad(0.0)
{
}
Circle::Circle(const Point& c,double r)
	:center(c), rad(r)
{
}

//복사생성자를 프로그램할 이유가 있다면 멤버변숭의 값을 복사해야 한다.
//복사생성자를 프로그램하면서 아무것도 하지 않으면 멤버변수는 복사되지 않는다.

Circle::Circle(const Circle& other)
	:center(other.center), rad(other.rad)
{
}

Circle::~Circle()
{
	std::cout << "나 원 제대로 소멸하고 있니?" << '\n';
}

void Circle::draw() const
{
	//그림을 그리는 대신 문자로 정보를 출력한다
	std::cout << "원 - 중심점(" << center.x << "," << center.y
		<< ") 반지름 " << rad << '\n';
}