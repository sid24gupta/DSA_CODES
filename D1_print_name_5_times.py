
def print_name(counter):
    if counter == 5:
        return
    print("Siddharth")
    counter += 1
    print_name(counter)

print_name(0)

print("\nNext Question......\n")

def print_linear(count):

    if count == 3:
        return
    count += 1
    print_linear(count)
    print(count)
    

print_linear(0)

print("\nNext Question.....\n")

def sum_of_nums(n):

    if n == 0:
        return n

    return n + sum_of_nums(n-1)


n = 5
t = sum_of_nums(n)
print("total = ",t)




