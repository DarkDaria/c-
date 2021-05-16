#include <stdio.h>
#include <time.h>

#define PLIK "dane_nowe1.csv"
#define N 100000

long long int fib[N];


long long int Fibonacci(int a) {
    fib[0] = 1;
    fib[1] = 1;
    if (a >= 2) {
        for (int i = 2; i < a; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        return fib[a];
    } else return 1;
}

int main() {
    int i = 0;
    long long int x;
    while (i < 5) {
        int n;
        FILE *fptr;
        n = i;
        clock_t start = clock();
        x = Fibonacci(n);
        printf("%d liczba ciagu Fibonacciego wynosi %lld\n", n, x);
        clock_t end = clock();
        double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        printf("Obliczenie %d liczby ciagu zajelo %.4f sek. \n", n, cpu_time_used);
        fptr = fopen(PLIK, "rb+");
        if (fptr == NULL) {
            fptr = fopen(PLIK, "w+");
            fprintf(fptr, "Liczba;Czas\n");
            fclose(fptr);
        }
        fptr = fopen(PLIK, "a+");
        fprintf(fptr, "%d;", n);
        fprintf(fptr, "%d\n", (int) (cpu_time_used * 1000));
        fclose(fptr);
        i++;
    }

    return 0;
}