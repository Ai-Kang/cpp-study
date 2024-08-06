struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		// 组装节点
		ListNode* result = new ListNode(-1);
		ListNode* head = result;
		// 定义是否进位
		bool isCarry = false;
		// 遍历数据
		while (l1 != nullptr || l2 != nullptr) {
			// 取出
			int vv1 = 0;
			int vv2 = 0;
			if (l1 != nullptr) {
				vv1 = l1->val;
			}
			if (l2 != nullptr) {
				vv2 = l2->val;
			}
			int temp = vv1 + vv2;
			if (isCarry) {
				temp++;
				isCarry = false;
			}
			if (temp >= 10) {
				isCarry = true;
				temp = temp % 10;
			}
			if (result->val == -1) {
				result->val = temp;
			} else {
				result->next = new ListNode(temp);
				result = result->next;
			}
			if (l1 != nullptr) {
				l1 = l1->next;
			}
			if (l2 != nullptr) {
				l2 = l2->next;
			}
		}
		if (isCarry) {
			result->next = new ListNode(1);
		}
		return head;
	}
};


