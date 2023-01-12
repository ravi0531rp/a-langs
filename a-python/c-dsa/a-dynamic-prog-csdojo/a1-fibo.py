# Recursion
# Memoization -> Store the computed results which will get repeated
# Bottom up approach which completely gets rid of recursion

def fibo(n):
    if n == 1 or n == 2:
        return 1
    return fibo(n-1) + fibo(n-2)
    
## fibonacci memoized solution
def fibo_memoized(n, memo):
    if n == 1 or n == 2:
        memo[n] = 1
        return 1
    if memo[n]:
        return memo[n]
    result = fibo_memoized(n-1, memo) + fibo_memoized(n-2, memo)
    memo[n] = result
    return result

## fibonacci bottom up approach
def fibo_bottom_up(n):
    if n == 1 or n == 2:
        return 1
    memo = [None for _ in range(n+1)]
    memo[1] = 1
    memo[2] = 1
    for i in range(3,n+1):
        memo[i] = memo[i-1] + memo[i-2]
    return memo[n]


if __name__ =="__main__":
    number = 10
    a = fibo(number)
    print(a)

    b = fibo_memoized(number, [None for _ in range(number+1)])
    print(b)

    c = fibo_bottom_up(number)
    print(c)