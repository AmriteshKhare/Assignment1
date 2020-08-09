#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle {
private:
	double len = 1;
	double width = 1;

public:
	float perimeter()
	{
		float t = len + width ;
		t += t;
		return t;
	}
	float area ()
	{
		return len * width;
	}
	int getlen() {
		return len;
	}
	void setlen(float a) {
		if (a >= 0.0 && a <= 20.0)
		{len = a;} else {
			cout << "please enter something vaild";
		}

	}
	int getWidth() {
		return width;
	}
	void setWidth(int a)
	{
		if (a >= 0.0 && a <= 20.0)
		{width = a;} else {
			cout << "please enter something vaild";
		}
	}
};
int main()
{


	Rectangle Bomb;
	Bomb.setlen(5.00);
	Bomb.setWidth(10.00);
	cout << "perimeter:";
	cout << Bomb.perimeter() << "\n";
	cout << "Area:";
	cout << Bomb.area() << "\n";


	return 0;
}