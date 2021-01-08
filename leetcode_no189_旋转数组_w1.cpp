/* ------------------------------------------------------------------|
给定一个包含红色、白色和蓝色，一共 n 个元素的数组，原地对它们进行排序，使得相同颜色的元素相邻，并按照红色、白色、蓝色顺序排列。
给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。

示例 1:

输入: [1,2,3,4,5,6,7] 和 k = 3
输出: [5,6,7,1,2,3,4]
解释:
向右旋转 1 步: [7,1,2,3,4,5,6]
向右旋转 2 步: [6,7,1,2,3,4,5]
向右旋转 3 步: [5,6,7,1,2,3,4]
示例 2:

输入: [-1,-100,3,99] 和 k = 2
输出: [3,99,-1,-100]
解释:
向右旋转 1 步: [99,-1,-100,3]
向右旋转 2 步: [3,99,-1,-100]
说明:

尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。
要求使用空间复杂度为 O(1) 的 原地 算法。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotate-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。|
-------------------------------------------------------------------*/

/*	
*
*	执行用时：8 ms, 在所有 C++ 提交中击败了86.99%的用户
*	内存消耗：9.8 MB, 在所有 C++ 提交中击败了87.48%的用户
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

int gcd(int a, int b) {
    return b > 0 ? gcd(b, a % b) : a;
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;
    if (!k) {
        return;
    }
    int cnt = gcd(k, n);
    for (int i = 0; i < cnt; i++) {
        int curr = i;
        int prev = nums[i];
        do {
            int next = (curr + k) % n;
            swap(nums[next], prev);
            curr = next;
        } while (curr != i);
    }
    return;
}

int main() {
    vector<int> nums = { -1,-100,3,99 };
    int k = 2;
    rotate(nums, k);
}