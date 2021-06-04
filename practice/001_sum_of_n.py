import time

def sum1(n):
    # Time complexity : O(n)
    sum = 0
    for num in range(n+1):
        sum += num
    return sum


def sum2(n):
    # Time complexity : O(1)
    return n * (n+1) // 2


if __name__ == "__main__":
    
    # get input from the user for n
    while True:
        n = input('Enter a natural number : ')

        print('\nSum of first {} natural numbers :'.format(n))

        # using sum1
        time1 = time.time()
        sum_1 = sum1(n)
        time_1 = time.time() - time1

        print('Sum1 : {} - Computed in : {:.6f} ms'.format(sum_1, time_1 *1000))

        # using sum2
        time2 = time.time()
        sum_2 = sum2(n)
        time_2 = time.time() - time2
        print('Sum2 : {} - Computed in : {:.6f} ms'.format(sum_2, time_2 *1000))

        print('\nSum2 is {:.2f} times faster than Sum1 in this case'.format((time_1/time_2)))
        print('--------------------------------------------\n')
