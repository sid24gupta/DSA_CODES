nums = [4,1,-1,2,-1,2,3]
k = 2

dict1 = {}
for num in nums:
    if num not in dict1.keys():
        dict1[num] = 1
    else:
        dict1[num] = dict1[num] + 1
print(dict1)
result = []
for i , j in dict1.items():
    result.append([j,i])
result.sort()
result.reverse()
print(result)
answer = []
for i in range(k):
    answer.append(result[i][1])
print(answer)

