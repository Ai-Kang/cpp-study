#include <iostream>

class Person {
public:
	// 类内定义类外赋值
	static int age;
	const static double PI;
private:

};
int Person::age = 10;
const double Person::PI = 3.14;

int main() {
	// 创建对徐
	Person p1;

	return 0;
}