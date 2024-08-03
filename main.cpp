#include <iostream>

class Point {
private:
public:
	int x;
	int y;
	Point(int x, int y) : x(x), y(y) {}
	// 类内+重载
	Point operator+(const Point& p2) {
		return Point(this->x + p2.x, this->y + p2.y);
	}
};

int main() {
	// 创建对象
	Point p1 = Point(10, 20);
	Point p2 = Point(1, 2);
	Point p3 = p1 + p2;
	std::cout << p1.x << ";" << p1.y << std::endl;
	std::cout << p3.x << ";" << p3.y << std::endl;

	return 0;
}