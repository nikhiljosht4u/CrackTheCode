#BUBBLE SORT

def bubble_sort(nums):
    for i in range(len(nums)-1):
        for j in range(len(nums)-i-1):
            if nums[j]>nums[j+1]:
                nums[j],nums[j+1] = nums[j+1],nums[j]

nums= [2,8,6,3,4]
bubble_sort(nums)
print(nums)
