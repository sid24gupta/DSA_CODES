n = 4

def fibo(n):

    if n <= 1:
        return n
    
    return fibo(n-1) + fibo(n-2)


v = fibo(n)
print(v)