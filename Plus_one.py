
def plusOne(digits):
    
    list1 = []
    nums = 0
    for i in digits:
        nums = nums *10 + i
        
    nums +=1
    nums = str(nums)
    for i in nums:
        list1.append(int(i))
        
    return list1