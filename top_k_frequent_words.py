words = ["i","love","leetcode","i","love","coding"]
k = 2
dict1 = {}
for i in words:
    if i not in dict1:
        dict1[i] = 1
    else:
        dict1[i] += 1
print(dict1)
lookup = {}
for i,j in dict1.items():
    if j not in lookup.keys():
        lookup[j] = [i]
    else:
        value = lookup[j]
        value.append(i)
        lookup[j] = sorted(value)
print("new ===========> ", lookup)
result = []
for i,j in lookup.items():
    result.append([i,j])
print(result)
result.sort()
result.reverse()
print(result)
rrr = []
for j in result:
    for k1 in j[1]:
        if len(rrr) <k:
            rrr.append(k1)
print(rrr)