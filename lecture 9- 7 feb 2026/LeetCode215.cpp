// Given an integer array nums and an integer k, return the kth largest element in the array.

// Note that it is the kth largest element in the sorted order, not the kth distinct element.

// Can you solve it without sorting?

 

// Example 1:

// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5
// Example 2:

// Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
// Output: 4
 

// Constraints:

// 1 <= k <= nums.length <= 105
// -104 <= nums[i] <= 104
#include <algorithm> 
# include <iostream> 
using namespace std;

int findKthLargest(int nums[], int n, int k) {
    sort(nums, nums + n); 
    return nums[n - k];
}
int main() {
    int nums[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 2;
    int result = findKthLargest(nums, n, k);
    cout << "The " << k << "th largest element is: " << result << endl;
    return 0;
}