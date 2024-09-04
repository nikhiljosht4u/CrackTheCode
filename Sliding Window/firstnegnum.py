"""
First Negative Number in Every Window of Size K
Given an array of integers and a number K, for each window of size K, find the first negative number in that window. If a window does not contain a negative number, return 0.
"""

def firstnegnum(nums,k):
    length = len(nums)
    negarr=[]
    for i in range(length-1):
        subarr = nums[i:i+k]
        for j in subarr:
            if j < 0:
                negarr.append(j)
                break;
    if len(negarr) == 0:
        return 0
    else:
        return negarr


nums = list(map(int,input("Enter input values with space in between : ").split()))
k = int(input("Enter window size : "))
res = firstnegnum(nums,k)
print(res)
