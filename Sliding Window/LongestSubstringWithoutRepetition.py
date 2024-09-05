"""
Longest substring without repeating characters:
Given a string, find the length of the longest substring without repeating characters.
"""

def longest_substring(nums):
    lengths = []
    sub_arr = []
    for i in range(len(nums)-1):
        if nums[i] not in sub_arr:
            sub_arr.append(nums[i])
        else:
            lengths.append(len(sub_arr))
            sub_arr = sub_arr[1:]
    if len(lengths) == 0:
        return len(nums)
    else:
        return max(lengths)


nums = list(map(int,input("enter Values with spaces in between : ").split()))
res = longest_substring(nums)
print(res)
