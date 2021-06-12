#include <stdio.h>
#include <time.h>

#define PLIK "plik.txt"

double Fibonacci(int a) {
    if (a < 3) return 1;

    else return Fibonacci(a - 2) + Fibonacci(a - 1);
}

int main() {
    int n;
    FILE *fptr;
    printf("Podaj liczbe w ciagu Fibonnacciego: \n");
    scanf("%d", &n);
    clock_t start = clock();
    printf("%d liczba ciagu Fibonacciego wynosi %.0lf\n", n, Fibonacci(n));
    clock_t end = clock();
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Obliczenie %d liczby ciagu zajelo %.4f sek. \n", n, cpu_time_used);
    fptr = fopen(PLIK, "rb+");
    if(fptr == NULL) 
    {
        fptr = fopen(PLIK, "w+");
        fprintf(fptr, "Czas;Liczba\n");
        fclose(fptr);
    }
    fptr = fopen(PLIK, "a+");
    fprintf(fptr, "%f;", cpu_time_used);
    fprintf(fptr, "%d\n", n);
    fclose(fptr);
    return 0;
}