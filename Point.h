#ifndef POINT_H
#define POINT_H


class Point
{
	public:
		Point();
		Point(const Point& other);
		Point& operator=(const Point& other);

		int Getx() { return x; }
		void Setx(int val) { x = val; }
		int Gety() { return y; }
		void Sety(int val) { y = val; }

	protected:

	private:
		int x;
		int y;
};

#endif // POINT_H
