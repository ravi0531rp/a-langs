import time
from functools import wraps

def Fibonacci(n):
    if n < 0:
        print("Incorrect input")
    elif n == 0:
        return 0
    elif n == 1 or n == 2:
        return 1
    else:
        return Fibonacci(n-1) + Fibonacci(n-2)

def timer(func):
    """time decorator"""

    @wraps(func)
    def wrapper(*args, **kwargs):
        start = time.perf_counter()
        results = func(*args, **kwargs)
        logger.debug(
            f"{func.__name__}: elapsed {round(time.perf_counter() - start, 2)} seconds"
        )

        return results

    return wrapper