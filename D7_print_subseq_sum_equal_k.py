# arr = [1, 2, 1]
# n = len(arr)

# def f(index, list1, total):
#     global arr
#     global n
#     if index >= n:
#         if total == 2:
#             print(list1)
#         return
#     total += arr[index]
#     list1.append(arr[index])
#     f(index+1, list1, total)
#     re = list1.pop()
#     total -= re
#     f(index+1, list1, total)

# f(0, [], 0)

arr = [1, 2, 1]
n = len(arr)

def f(index, list1, total, arr, n):
    
    if index >= n :
        if total == 2:
            print(list1)
            return True
        return False
    list1.append(arr[index])
    total += arr[index]
    if f(index+1, list1, total, arr, n):
        return True
    re = list1.pop()
    total -= re
    if f(index+1, list1, total, arr, n):
        return True
    return False

f(0, [], 0, arr, n)

