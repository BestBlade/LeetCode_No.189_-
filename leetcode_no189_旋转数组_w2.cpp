/* ------------------------------------------------------------------|

给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。

示例 1:

输入: [1,2,3,4,5,6,7] 和 k = 3
输出: [5,6,7,1,2,3,4]
解释:
向右旋转 1 步: [7,1,2,3,4,5,6]
向右旋转 2 步: [6,7,1,2,3,4,5]
向右旋转 3 步: [5,6,7,1,2,3,4]
示例 2:

输入: [-1,-100,3,99] 和 k = 2
输出: [3,99,-1,-100]
解释:
向右旋转 1 步: [99,-1,-100,3]
向右旋转 2 步: [3,99,-1,-100]
说明:

尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。
要求使用空间复杂度为 O(1) 的 原地 算法。|
-------------------------------------------------------------------*/

/*	
*
*	执行用时：4 ms, 在所有 C++ 提交中击败了98.94%的用户
*	内存消耗：9.7 MB, 在所有 C++ 提交中击败了92.52%的用户
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
    //reverse左闭右开
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.begin() + k);
    return;
}

int main() {
    vector<int> nums = { 1,2,3,4,5,6,7 };
    int k = 3;
    rotate(nums, k);
}