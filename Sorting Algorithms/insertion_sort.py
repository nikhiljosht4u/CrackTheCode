#INSERTION SORT

def insertion_sort(nums):
    l = len(nums)
    min = nums[0]
    for i in range(1,l):
        while nums[i-1]> nums[i] and i>0:
            nums[i-1],nums[i] = nums[i],nums[i-1]
            i = i-1

nums = [3,2,5,7,4]
insertion_sort(nums)
print(nums)
    
