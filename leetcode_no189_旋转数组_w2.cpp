/* ------------------------------------------------------------------|

����һ�����飬�������е�Ԫ�������ƶ� k ��λ�ã����� k �ǷǸ�����

ʾ�� 1:

����: [1,2,3,4,5,6,7] �� k = 3
���: [5,6,7,1,2,3,4]
����:
������ת 1 ��: [7,1,2,3,4,5,6]
������ת 2 ��: [6,7,1,2,3,4,5]
������ת 3 ��: [5,6,7,1,2,3,4]
ʾ�� 2:

����: [-1,-100,3,99] �� k = 2
���: [3,99,-1,-100]
����:
������ת 1 ��: [99,-1,-100,3]
������ת 2 ��: [3,99,-1,-100]
˵��:

�������������Ľ�����������������ֲ�ͬ�ķ������Խ��������⡣
Ҫ��ʹ�ÿռ临�Ӷ�Ϊ O(1) �� ԭ�� �㷨��|
-------------------------------------------------------------------*/

/*	
*
*	ִ����ʱ��4 ms, ������ C++ �ύ�л�����98.94%���û�
*	�ڴ����ģ�9.7 MB, ������ C++ �ύ�л�����92.52%���û�
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <stack>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}

};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void rotate(vector<int>& nums, int k) {
    k %= nums.size();
    if (!k) {
        return;
    }
    reverse(nums.begin(), nums.end());
    //reverse����ҿ�
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.begin() + k);
    return;
}

int main() {
    vector<int> nums = { 1,2,3,4,5,6,7 };
    int k = 3;
    rotate(nums, k);
}