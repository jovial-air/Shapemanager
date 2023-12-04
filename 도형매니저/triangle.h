//-------------------------------------------------------------------------------------
//triangle.h                        세점으로 삼각형을 정의할 수 있다.
//                
//2023.11.19  by Wulong
//-------------------------------------------------------------------------------------
#include "point.h"                 //Point를 Triangle에서 사용
#include "shape.h"                 //Shape을 상속 받음

class Triangle : public Shape
{
	Point p1, p2, p3;
public:
	Triangle();
	Triangle(const Point&, const Point&, const Point&);
	Triangle(const Triangle&);
	~Triangle();

	virtual void draw() const override;      //virtual function을 overridding 다형성 함수
};