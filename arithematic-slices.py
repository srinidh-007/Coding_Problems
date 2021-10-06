# 413 ARITHEMATIC SLICES
# https://leetcode.com/problems/arithmetic-slices/


# My Approach:
# As I traverse the list, find the lengths of the subarrays which follows the rule c-b == b-a for [...,a,b,c...].
# And calculate the number of possible combinations thematically. Then continue the same.

def numberOfArithmeticSlices(nums):
    if len(nums) < 3:
        return 0

    res, ln = 0, 0
    for index in range(2, len(nums)):
        if nums[index] - nums[index - 1] == nums[index - 1] - nums[index - 2]:
            ln += 3 if ln == 0 else 1
        else:
            # For len=6, combinations =
            # ((6-3)+1) + ((6-4)+1) + ((6-5)+1) + (( 6-6)+1)
            total = 0
            for i in range(3, ln + 1):
                total += ln - i + 1
            res += total
            ln = 0

    total = 0
    for i in range(3, ln + 1):
        total += ln - i + 1
    res += total

    return res


nums = [1,2,3,4]
ans = numberOfArithmeticSlices(nums)
print(ans)
#
# Example
# 1:
#
# Input: nums = [1, 2, 3, 4]
# Output: 3
# Explanation: We have 3 arithmetic slices in nums: [1, 2, 3], [2, 3, 4] and [1, 2, 3, 4] itself.

# Example
# 2:
#
# Input: nums = [1]
# Output: 0
