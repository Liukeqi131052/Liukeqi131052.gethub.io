#include<iostream>
using namespace std;
class point
{
public:
	double x;
	double y;
};
class Line
{
public:
	double a;
	double b;
	Line(double a1, double b1) :a(a1), b(b1) {}
	void print();
};
class setpoint
{
public:
	point dian;
	Line line1;
	Line line2;
	setpoint(Line my_line1,Line my_line2):line1(my_line1),line2(my_line2){}
	int find_point();
};
void Line::print()
{
	cout << "y=" << a << "x+" << b << endl;
}
 int setpoint::find_point()
{
	point dian;
	dian.x= (line2.b - line1.b) / (line1.a - line2.a);
	dian.y=line1.a* dian.x + line1.b;
	cout << "(" << dian.x << dian.y << ")" << endl;
	return 0;
}
int main()
{
	Line Line_01(2,3);
	Line Line_02(5,2);
	Line_01.print();
	Line_02.print();
	setpoint temp(Line_01, Line_02);
	temp.find_point();
}
