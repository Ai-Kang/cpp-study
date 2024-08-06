#include <iostream>
#include <vector>

void ergodicVector() {
	// 创建vector
	std::vector<int> v1;
	// 添加数据
	v1.push_back(10);
	// 创建2,10个5
	std::vector<int> v2(10, 5);
	// 拷贝构造函数
	std::vector<int> v3 = std::vector<int>(v2);
	std::vector<int> v4 = std::vector<int>(v2.begin(), v2.end());
	// 使用array构造
	int arr1[] = { 1,2,3,4,5 };
	std::vector<int> v5 = std::vector<int>(arr1, arr1 + 3);
}




int main() {
	ergodicVector();
	return 0;
}