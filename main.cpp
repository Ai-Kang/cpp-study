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
	// 拷贝数据进入vector
	std::vector<int> v6;
	v6.assign(v5.begin(), v5.end());
	// 获取容器中的元素个数
	size_t len = v6.size();
	// 容器是否为空
	bool e = v6.empty();
	// 容器容量
	size_t capacity = v6.capacity();
	// 重置大小
	v6.resize(20);
	// 使用9填充
	v6.resize(20, 9);
	// 数据读取
	int v0 = v6.at(0);
	int v1 = v6[1];
	// 第一个元素
	int front = v6.front();
	// 最后一个元素
	int back = v6.back();
	// 插入数据,插入5个0
	v6.insert(v6.begin() + 3, 5, 0);
	// 末尾追加
	v6.push_back(10);
	// 移除末尾元素
	v6.pop_back();
	// 根据指针范围删除
	v6.erase(v6.begin() + 1);
	v6.erase(v6.begin(), v6.end());
	// 清空
	v6.clear();
	// 交换
	v6.swap(v1);
}

int main() {
	ergodicVector();
	return 0;
}