#include <iostream>
#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <set>

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
	// 访问
	int& ele = d1.at(1);
	// 部分功能和verctor一样
	std::deque<int>::iterator();
}

void studyStack() {
	// 创建栈容器
	std::stack<int> s1;
	// 添加数据-压栈
	s1.push(10);
	s1.push(20);
	// 获取栈顶数据
	int& ele = s1.top();
	// 赋值
	ele = 200;
	// 出栈
	s1.pop();
}

void studyQueue() {
	// 先进先出队列
	std::queue<int> q1;
	// 添加数据
	q1.push(10);
	q1.push(20);
	q1.push(30);
	// 获取队头数据
	int& ele1 = q1.front();
	// 获取队尾数据
	int& ele2 = q1.back();
	// 移除第一个数据
	q1.pop();
}

void studyList() {
	// 创建list
	std::list<int> list1;
	std::list<int> list2(2, 10); // 2个10
	std::list<int> list3(list2.begin(), list2.end());
	std::list<int> list4(list3);
	//末尾添加
	list2.push_front(20);
	// 头添加
	list2.push_back(30);
	// 移除开头元素
	list2.pop_front();
	// 移除末尾元素
	list2.pop_back();
	// 插入
	list2.insert(list2.begin(), 100);
	// 插入列表
	list2.insert(list2.end(), list1.begin(), list1.end());
	// 移除指定值
	list2.remove(100);
	// 赋值
	list2.assign(10, 100);
	list2.assign(list3.begin(), list3.end());
	// 读取第一个
	int& v1 = list2.front();
	// 读取最后一个元素
	int& v2 = list2.back();
	// 反转
	list2.reverse();
	// 排序
	list2.sort();
	// 删除
	list2.erase(list2.begin());
	list2.erase(list2.begin(), list2.end());
	// 清空
	list2.clear();
}

void studySet() {
	std::multiset<int> s1;
	std::multiset<int> s2(s1);
	// 插入元素
	s1.insert(1);
	s1.insert(2);
	s1.insert(3);
	s1.insert(4);

	// 获取首元素指针迭代器对象
	std::set<int>::iterator it1 = s1.begin();
	// 删除元素
	s1.erase(it1);
	// 查找数据
	std::set<int>::iterator find1 = s1.find(4);
	if (find1 == s1.end()) {
		std::cout << "not find" << std::endl;
	}
	// 返回第一个元素小于等于指定元素的迭代器
	std::set<int>::iterator find2 = s1.lower_bound(4);
	// 返回第一个元素大于指定元素的迭代器
	std::set<int>::iterator find2 = s1.upper_bound(4);
}

int main() {
	studySet();
	return 0;
}