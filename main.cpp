#include <iostream>

void add(int& a, int b) {
	a = a + b;
}

int main() {
	int a = 10;
	int b = 20;
	add(a, b);
	std::cout << "a + b = " << a << std::endl;
	return 0;
}