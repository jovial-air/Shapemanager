//-------------------------------------------------------------------------------------
//Point.h         Point class declaration - ��� ������ ������ �����Ǿ�� �Ѵ�
//                2���� ��ǥ(x,y)�� ��Ÿ����
//2023.11.19  by Wulong
//-------------------------------------------------------------------------------------

#ifndef _Point                         //�� ���� include �� �� �ֵ��� ��(���ù��� ���� #endif �ʿ�) define�� ���� �Ǿ����������� ������
#define _Point                         //���Ǻ� ������ define, ifdef, ifndef, endif

struct Point                           //struct - default public
{
	double x, y;

	Point();                           //default constructor - ����� �Լ�
	Point(double, double);          
	Point(const Point&) = default;     //��������� - ����ڰ� ���� �ʿ� ���ٴ� �ǹ�

};
#endif