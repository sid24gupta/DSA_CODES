s = "tree"
dict1 = {}
for i in s:
    if i not in dict1:
        dict1[i] = 1
    else:
        dict1[i] += 1
print("dict1 =====> ", dict1)

result = []

for i,j in dict1.items():
    result.append([j,i])
print("result =====>", result)
result.sort()
result.reverse()
print("result =====>", result)
answer = ""
for i in result:
    answer += i[1]*i[0]
print("answer =====>", answer)