#include <iostream>

using namespace std;

class Person {
public:
	int age;
	string name;
public:
	explicit Person() {}
	Person(int age, string name) : age(age), name(name) {
		cout << "有参构造函数执行" << endl;
	}
	// 拷贝构造函数
	Person(const Person& p) {
		this->age = p.age;
		this->name = p.name;
		cout << "拷贝构造函数" << endl;
	}
	// 析构函数，如果是new的对象需要使用delete才会调用析构函数
	~Person() {
		cout << this << endl;
		cout << "对象析构了" << endl;
	}

};

int main() {
	// 对象的属性不允许修改,只能调用常函数
	const	 Person p3 = Person(10, "张三");
	//p3.age = 20;
	return 0;
}
