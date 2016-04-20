#include "stdafx.h"
#include <iostream> 

class Point {
protected:
	int x, y;
public:
	Point(int _x, int _y) : x(_x), y(_y)
	{}
	void Print() {
		std::cout << "x=" << x << " y=" << y;
	}
};

class Point3 : public Point {
protected:
	int z;
public:
	Point3(int _x, int _y, int _z) : Point(_x, _y), z(_z) {
	}

	void Print() {
		Point::Print();
		std::cout << " z=" << z;
	}

};

void main() {
	int x, y, z;
	std::cin >> x >> y >> z;

	Point a(x, y);
	Point3 b(x, y, z);

	a.Print(); std::cout << std::endl;
	b.Print(); std::cout << std::endl;
}