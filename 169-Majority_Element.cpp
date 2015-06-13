/**Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times
 * 思路：遍历数组，找到个数大于size/2的数返回，时间：O(n)，空间:O(n), 待优化；
 *       优化方案：遍历数组，删除不同的两个元素，最终留下的为结果，时间：O(n),空间O(1);
 * */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (!nums.empty()) {
            int times = 0;
            int item = 0;
            for (int i = 0; i < nums.size(); ++i) {
                if (times == 0) {
                    item = nums[i];
                    ++times;
                }
                else {
                    if (item == nums[i])
                        ++times;
                    else
                        --times;
                }
            }
            return item;
        }
    }
    /*
    int majorityElement(vector<int>& nums) {
        if (!nums.empty()) 
        {
            map<int, int> count;
            for (int i = 0; i < nums.size(); ++i) 
            {
                if (count.find(nums[i]) != count.end())
                {
                    count[nums[i]]++;
                    if (count[nums[i]] > (nums.size() >> 1))
                    {
                        return nums[i];
                    }
                }
                else
                {
                    count[nums[i]] = 1;
                }
            }
            for (int i = 0; i < count.size(); ++i)
            {
                if (count[nums[i]] > (nums.size() >> 1))
                    return nums[i];
            }
        }
    }*/
};
