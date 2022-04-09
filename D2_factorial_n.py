def factorial_of_n(n):
    
    if n == 0 :
        return 1

    return n * factorial_of_n(n-1)

n = 5
answer = factorial_of_n(n)

print(f"Factorial of {n} is {answer}")