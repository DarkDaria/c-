#include <stdio.h>
#include <time.h>

#define FILE "plik.txt"

int Fibonacci(int a) {
    if (a < 3) return 1;

    else return Fibonacci(a - 2) + Fibonacci(a - 1);
}

int main() {
    int n;
    FILE * zapis;
    printf("Podaj liczbe w ciagu Fibonnacciego: \n");
    scanf("%d", &n);
    clock_t start = clock();
    printf("%d liczba ciagu Fibonacciego wynosi %d\n", n, Fibonacci(n));
    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Obliczenie %d liczby ciagu zajelo %f sek. \n", n, cpu_time_used);
    zapis = fopen(FILE, "w");
    fprintf(zapis, "%f\n");
    fclose(FILE);
}