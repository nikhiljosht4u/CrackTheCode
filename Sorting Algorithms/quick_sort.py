#QUICK SORT

def quick_sort(nums):
    if len(nums)<=1:
        return nums
    pivot = nums[0]
    left = []
    right = []
    for i in nums[1:]:
        if i>pivot:
            right.append(i)
        else:
            left.append(i)
    return quick_sort(left) + [pivot]+quick_sort(right)


nums = list(map(int, input().split()))
sor = quick_sort(nums)
print(sor)
