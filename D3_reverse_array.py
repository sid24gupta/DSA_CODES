arr = [1,2,3,4,5,6]
n = len(arr)

def rev_arr(i):

    global arr
    global n

    if i >=  n/2:
        return
    
    arr[i],arr[n-i-1] = arr[n-i-1],arr[i]

    return rev_arr(i+1)
    


print("Normal array :  ", arr)
rev_arr(0)
print("Reverse array : ", arr)