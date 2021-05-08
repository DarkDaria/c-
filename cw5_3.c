#include <stdio.h>

int Fibonacci(int a) {
    if (a < 3) return 1;

    else return Fibonacci(a - 2) + Fibonacci(a - 1);
}

int main() {
    int n;
    printf("Podaj liczbe w ciagu Fibonnacciego: \n");
    scanf("%d", &n);
    printf("%d liczba ciagu Fibonacciego wynosi %d", n, Fibonacci(n + 1));
}