//-------------------------------------------------------------------------------------
//Shape.h         class Shape - Virtual Base class
//                �� Ŭ������ �߻� Ŭ����(abstract class)�̴�.
// 
//2023.11.19  by Wulong
//-------------------------------------------------------------------------------------
#ifndef _Shape        // _Shape�� �տ��� ���ǵ��� �ʾҴٸ�
#define _Shape        // _Shape�� �����Ѵ�

class Shape
{
public:
	Shape() { };   //class ������
	virtual~Shape() { };  //class �Ҹ���

	virtual void draw() const = 0;       //pure virtual function
};
#endif