strs = ["eat","tea","tan","ate","nat","bat"]

# o/p : [["bat"],["nat","tan"],["ate","eat","tea"]]

look_up = {}
for str in strs:

    value = ''.join(sorted(str))

    if value not in look_up.keys():
        look_up[value] = []
        look_up[value].append(value)

    else:
        look_up[value].append(str)

print(look_up.values())