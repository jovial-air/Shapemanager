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

//��������ڸ� ���α׷��� ������ �ִٸ� ��������� ���� �����ؾ� �Ѵ�.
//��������ڸ� ���α׷��ϸ鼭 �ƹ��͵� ���� ������ ��������� ������� �ʴ´�.

Circle::Circle(const Circle& other)
	:center(other.center), rad(other.rad)
{
}

Circle::~Circle()
{
	std::cout << "�� �� ����� �Ҹ��ϰ� �ִ�?" << '\n';
}

void Circle::draw() const
{
	//�׸��� �׸��� ��� ���ڷ� ������ ����Ѵ�
	std::cout << "�� - �߽���(" << center.x << "," << center.y
		<< ") ������ " << rad << '\n';
}