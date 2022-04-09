nums = [3,2,3,1,2,4,5,5,6]
k = 4
dict1 ={}
for num in nums:
    if num not in dict1:
        dict1[num] = 1
    else:
        dict1[num] += 1
print(dict1)
result = []
for i,j in dict1.items():
    result.append([i,j])
print(result)
result.sort()
result.reverse()
print(result)
counter = 0
for i in result:
    while i[1]:
        counter += 1
        if counter == k:
            print(i[0])
            break
        i[1] -= 1