def rotate(nums, k) -> None:
    i = 0
    n = len(nums)
    while i<k:
        value1 = nums[0]
        for j in range(0,len(nums)-1):
            nums[j] = nums[j+1]
        nums[-1] = value1
        i+=1