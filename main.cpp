#include <iostream>

int main() {
	// 定义数组1,可能存在脏数据
	int arr1[10];
	for (int i = 0; i < 10; i++) {
		std::cout << arr1[i] << std::endl;
	}
	// 定义数组2
	int arr2[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		std::cout << arr2[i] << std::endl;
	}
	// 定义数组3
	int arr3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++) {
		std::cout << arr3[i] << std::endl;
	}
	// 定义数组4
	int arr4[] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		std::cout << arr4[i] << std::endl;
	}
	return 0;
}