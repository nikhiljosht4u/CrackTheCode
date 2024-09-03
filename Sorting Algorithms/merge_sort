def merge(nums):
    if len(nums)<=1:
        return nums
    mid = len(nums)//2
    left = merge(nums[:mid])
    right = merge(nums[mid:])

    return merge_sort(left,right)

def merge_sort(left,right):
    sorted_list = []
    i=j=0
    while i<len(left) and j < len(right):
        if left[i]<right[j]:
            sorted_list.append(left[i])
            i+=1
        else:
            sorted_list.append(right[j])
            j+=1
    while i < len(left):
        sorted_list.append(left[i])
        i += 1
    while j < len(right):
        sorted_list.append(right[j])
        j += 1
    return sorted_list
nums = [38, 27, 43, 3, 9, 82, 10]
sorted_nums = merge(nums)
print(sorted_nums)
