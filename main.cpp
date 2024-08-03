#include <iostream>

template<typename T>
class A {
public:
	T t1;
};


int main() {
	A<int> a();
	return 0;
}