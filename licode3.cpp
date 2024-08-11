#include <iostream>
#include <list>

using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		// 记录最长
		int maxLen = 0;
		// 记录当前查找长度
		int indexLen = 0;
		// 存储结果
		std::list<char> list;
		// 遍历字符串
		for (size_t i = 0; i < s.length(); i++) {
			// 如果找到了字符
			if ((std::find(list.begin(), list.end(), s[i])) != list.end()) {
				// 判断是否最长
				if (maxLen < indexLen) {
					maxLen = indexLen;
				}
				// i - list长度则是开始找的位置 + 1等于下一个需要开始查找的位置
				i = i - list.size();
				// 清空临时变量
				list.clear();
				indexLen = 0;
			} else {
				indexLen++;
				list.push_front(s[i]);
			}
		}
		if (maxLen < indexLen) {
			maxLen = indexLen;
		}
		return maxLen;
	}
};