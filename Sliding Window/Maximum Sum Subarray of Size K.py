"""
Maximum Sum Subarray of Size K
Given an array of integers and a number K, find the maximum sum of a subarray of size K.
"""
def sumofsubarray(nums,k):
    sum_arr=[]
    for i in range(len(nums)):
        sub_arr = nums[i:k+i]
        sum_arr.append(sum(sub_arr))
    print(max(sum_arr))

nums=list(map(int,input("Enter Values with space in between them : ").split()))
k = int(input("Enter Value of K : "))
sumofsubarray(nums,k)
