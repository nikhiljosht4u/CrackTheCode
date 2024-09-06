def maximumSubarraySum(nums,k):
    left = 0
    sum = 0
    maxsum = 0
    seen = set()
    for right in range(len(nums)):
        while nums[right] in seen:
            seen.remove(nums[left])
            sum-=nums[left]
            left += 1
            
        seen.add(nums[right])
        sum+=nums[right]
            
        if right - left + 1 == k:
            maxsum = max(sum,maxsum)

            seen.remove(nums[left])
            sum-=nums[left]
            left += 1

    return maxsum
