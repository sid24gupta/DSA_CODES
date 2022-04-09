arr = [3, 1, 2]
n = len(arr)
def subseq(index, list1):
    global n
    global arr
    if index >= n:
        print(list1)
        return
    list1.append(arr[index])
    subseq(index +1, list1)
    list1.pop()
    subseq(index+1, list1)

subseq(0,[])