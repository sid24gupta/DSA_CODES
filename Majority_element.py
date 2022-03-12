
def majorityElement(nums) -> int:
    
    dict1 = {}
    for i in nums:
        if i not in dict1:
            dict1[i] = 1
        else:
            dict1[i]+=1
    
    for i,j in dict1.items():
        if j > len(nums)/2:
            return i
    