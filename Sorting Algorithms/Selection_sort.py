#SELECTION SORT
def selection_sort(nums):
    l = len(nums)
    for i in range(l-1):
        min = i
        for j in range(i,l):
            if nums[j] < nums[min]:
                min = j
        nums[i],nums[min]=nums[min],nums[i]



nums = [5,1,2,3,9]
selection_sort(nums)
print(nums)
