import sys

def main():
    nums = list(map(int,input("Enter the elements separated by space: ").split()))
    choice = int(input("Enter your preferred type of Sorting Mechanism : \n\n1. INSERTION SORT\n\n2. SELECTION SORT\n\n3. BUBBLE SORT\n\n4. QUICK SORT\n\n5. MERGE SORT\n\n"))
    if choice == 1:
        insertion(nums)
    elif choice == 2:
        selection(nums)
    elif choice == 3:
        bubble(nums)
    elif choice == 4:
        print("Quick Sorting... .. .\n")
        sum = quick(nums)
        print(sum)
    elif choice == 5:
        print("Merge Sorting... .. .\n")
        sorted_nums = merge(nums)
        print(sorted_nums)
    else:
        print("\n\nSorry Darling... ... \n\n  Check the input!\n\n    Byee the byeeeeeee")
        sys.exit(1)
        
def insertion(nums):
    for i in range(1,len(nums)):
        while nums[i-1]>nums[i] and i>0:
            nums[i-1],nums[i] = nums[i],nums[i-1]
            i = i-1
    print("Inserting Sorting... .. .\n")
    print(nums)

def selection(nums):
    for i in range(len(nums)-1):
        min = i
        for j in range(i,len(nums)):
            if nums[j]<nums[min]:
                min = j
        nums[i],nums[min] = nums[min],nums[i]
    print("Selection Sorting... .. .\n")
    print(nums)

def bubble(nums):
    for i in range(len(nums)-1):
        for j in range(len(nums)-1-i):
            if nums[j]>nums[j+1]:
                nums[j+1],nums[j] = nums[j],nums[j+1]
    print("Bubble Sorting... .. .\n")
    print(nums)
    
def quick(nums):
    sum = []
    if len(nums)<=1:
        return nums
    pivot = nums[0]
    left = []
    right = []
    for i in nums[1:]:
        if i > pivot:
            right.append(i)
        else:
            left.append(i)
    return quick(left)+[pivot]+quick(right)


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
    

if __name__ == "__main__":
    main()

             
