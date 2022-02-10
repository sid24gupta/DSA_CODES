s = "}"

dict1 = { "]" : "[", "}" : "{", ")" : "(" }
arr = []

def valid_paren(s):
    for char in s:

        if char in dict1.values():
            arr.append(char)
        
        elif char in dict1.keys():
            if arr == [] or dict1[char] != arr.pop():
                return False
        else:
            return False

    return arr==[]

result = valid_paren(s)
print(result)