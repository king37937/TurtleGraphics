#include "Point.h"

Point::Point()
{
	//ctor
	this(0, 0);
}

Point::Point(int x, int y)
{
	//ctor
	this.x = x;
	this.y = y;
}

Point::Point(const Point& other)
{
	//copy ctor
	return new Point(other.x, other.y);
}

Point& Point::operator=(const Point& rhs)
{
	if (this == &rhs) return *this; // handle self assignment
	//assignment operator
	return *this;
}
