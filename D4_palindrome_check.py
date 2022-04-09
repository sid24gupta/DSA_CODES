str1 = "MADAM"
n = len(str1)

def palindrome_check(i):
    
    global str1
    global n
    if i >= n/2: return
    if str1[i] != str1[n-1]:
        return False

    palindrome_check(i+1)
    return True

answer = palindrome_check(0)

if answer:
    print(f"Given string {str1} is palindrome")
else:
    print(f"Given string {str1} is not a palindrome")