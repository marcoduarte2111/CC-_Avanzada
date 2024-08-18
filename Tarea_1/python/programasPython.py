    # función recursiva serie de Fibonacci

    def serie_fibonacci(n: int) -> list:
        if n < 2:
            return n
        else:
            return (serie_fibonacci(n-1) + serie_fibonacci(n-2))


    # función recursiva factorial

    def factorial(n: int) -> int:
        if n == 0 or n == 1:
            return 1
        else:
            return n * factorial(n-1)
