#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;

    printf("Ingrese la posición del término de la sucesión de Fibonacci que desea calcular: ");
    scanf("%d", &n);

    printf("El término en la posición %d de la sucesión de Fibonacci es: %d\n", n, fibonacci(n - 1));

    return 0;
}
