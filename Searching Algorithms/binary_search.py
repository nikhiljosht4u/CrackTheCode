#BINARY SEARCH

def main():
    nums = list(map(int,input("Enter Values with space in between : ").split()))
    ele = int(input("Enter Value to be Searched : "))
    pos = binary_search(nums,ele)+1
    print(pos)

def binary_search(nums,ele):
    mid = int(len(nums)//2)
    while nums[mid] != ele:
        if ele > nums[mid]:
            nums = nums[mid:]
        else:
            nums = nums[:mid]
    return mid

if __name__ == "__main__":
    main()
