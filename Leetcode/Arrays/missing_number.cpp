Problem : Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Constraints:
n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique.

Code :
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int sum_index = n;
        int sum_arr = 0;
        while(i < n) {
            sum_index += i;
            sum_arr += nums[i];
            i++;
        }
        return (sum_index - sum_arr);
    }
};