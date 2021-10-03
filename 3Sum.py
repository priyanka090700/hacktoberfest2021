
class Solution:
    def threeSum(self, nums) :
        res_list = []
        nums.sort()
        for i in range(len(nums)):
            if i > 0 and nums[i] == nums[i - 1]:
                continue

            l, r = i + 1, len(nums) - 1
            while l < r:
                tsum = nums[i] + nums[l] + nums[r]
                if tsum > 0:
                    r -= 1

                elif tsum < 0:
                    l += 1
                else:

                    res_list.append([nums[i], nums[l], nums[r]])
                    l+=1
                    print(res_list)
                    while l < r and nums[l] == nums[l - 1]:
                        l += 1
        return res_list


if __name__ == "__main__":
    s = Solution()
    nums = list(map(int,input().split()) #take input from user
    print(s.threeSum(nums))
