# Method 1: Simple Loop
def fibonacci_loop(n):
    fib = []
    a, b = 0, 1
    for _ in range(n):
        fib.append(a)
        a, b = b, a + b
    return fib

# Method 2: Recursion
def fibonacci_recursive(n):
    if n <= 1:
        return n
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2)

# Method 3: Generator
def fibonacci_generator(n):
    a, b = 0, 1
    for _ in range(n):
        yield a
        a, b = b, a + b

# --- Run all 3 ---
n = 10

print("Loop:     ", fibonacci_loop(n))
print("Recursive:", [fibonacci_recursive(i) for i in range(n)])
print("Generator:", list(fibonacci_generator(n)))