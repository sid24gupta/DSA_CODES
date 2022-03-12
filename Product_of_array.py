nums = [1,2,0,4]
mul = 1
flag = 0
for i in nums:
    if not i == 0:
        mul *= i
    else:
        flag +=1
print(mul)
if flag > 1:
    print("complete zero array [0]*len(nums)")

for i in range(0,len(nums)):

    if flag == 0:
        nums[i] = int(mul/nums[i])
    else:
        if nums[i] == 0:
            nums[i] = mul
        else:
            nums[i] = 0

print(nums)