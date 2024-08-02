#include <iostream>

/*
	人类的定义
		访问权限：
			private：只在当前类中可访问
			protected：当前类和子类可访问
			public：任何位置访问
*/
class Person {
public:
	// 构造函数
	Person();
	// 析构函数
	~Person();
	// 属性
	int age;
	std::string name;
	// 方法
	int getAge() {
		return this->age;
	}

private:

};

Person::Person()
{
}

Person::~Person()
{
}



int main() {
	// 创建对徐
	Person p1;
	p1.age = 10;
	p1.name = "张三";

	Person p2 = {};
	p2.age = 10;
	p2.name = "张三";

	Person p3 = Person();
	p3.age = 10;
	p3.name = "张三";

	Person* p4 = new Person();
	p4->age = 10;
	p4->name = "张三";

	delete p4;
	return 0;
}