# Leetcode 55. Jump Game
#https://leetcode.com/problems/jump-game/

import collections


class Solution:
    #brute force approach
    def canJump1(self, nums: list) -> bool:
        q = collections.deque([0])
        n = len(nums)
        if n == 1: return True

        while q:
            idx = q.popleft()
            # check if any iteration reaches the last index
            for i in range(idx + 1, min(idx + nums[idx] + 1, n)):
                if i == n - 1:
                    return True
                q.append(i)

        return False

    #optimal approach
    def canJump2(self, nums: list) -> bool:
        n = len(nums)
        idx = n - 1
        for i in range(n - 2, -1, -1):
            # If this index has jump count which can reach to or beyond the last position
            if i + nums[i] >= idx:
                idx = i  # Since we just need to reach to this new index

        return idx == 0  #return if we reach the first index
