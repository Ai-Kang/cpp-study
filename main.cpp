#include <iostream>
#include <deque>

void studyDeque() {
	// 创建双端队列
	std::deque<int> d1;
	// 头部插入
	d1.push_front(10);
	// 尾部添加元素
	d1.push_back(20);
	// 插入
	d1.insert(d1.begin(), 2);
	// 头部删除
	d1.pop_front();
	// 尾部删除
	d1.pop_back();

	std::deque<int>::iterator();
}

int main() {
	studyDeque();
	return 0;
}