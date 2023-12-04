//-------------------------------------------------------------------------------------
//Shape.h         class Shape - Virtual Base class
//                이 클래스는 추상 클래스(abstract class)이다.
// 
//2023.11.19  by Wulong
//-------------------------------------------------------------------------------------
#ifndef _Shape        // _Shape이 앞에서 정의되지 않았다면
#define _Shape        // _Shape를 정의한다

class Shape
{
public:
	Shape() { };   //class 생성자
	virtual~Shape() { };  //class 소멸자

	virtual void draw() const = 0;       //pure virtual function
};
#endif