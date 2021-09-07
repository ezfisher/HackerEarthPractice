import math

def isPrime(n):
    flag = 0

    if n <= 1:
        result = 'Not prime'
        return result
    
    if n <= 3:
        result = 'Prime'
        return result
    
    if n % 2 == 0 or n % 3 == 0:
        flag = 1
        result = 'Not prime'
        return result

    # Only need to check numbers less than sqrt(n)
    check = 5

    while check <= math.sqrt(n):
        if check % 2 == 0 or check % 3 == 0:
            check += 1

        if n % check == 0:
            result = 'Not prime'
            flag = 1
            break
        check += 1
    
    if flag == 0:
        result = 'Prime'


    return result


# Checking result on a large prime number that I found on wikipedia
num_trials = int(input())
for num in range(num_trials):
    print(isPrime(int(input())))