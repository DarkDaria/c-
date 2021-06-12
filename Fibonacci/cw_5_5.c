#include stdio.h
#include time.h

#define PLIK dane_nowe.csv

long long int Fibonacci(int a) {

    if (a 3) return 1;

    else return Fibonacci(a - 2) + Fibonacci(a - 1);
}

int main() {
    int i = 20;
    long long int x;
    while (i 52) {
        int n;
        FILE fptr;
        n = i;
        clock_t start = clock();
        x = Fibonacci(n);
        clock_t end = clock();
        double cpu_time_used = ((double) (end - start))
        CLOCKS_PER_SEC;
        printf(Obliczenie % d
        liczby
        ciagu
        zajelo % .4f
        sek.n, n, cpu_time_used);
        fptr = fopen(PLIK, rb + );
        if (fptr == NULL) //if file does not exist, create it
        {
            fptr = fopen(PLIK, w + );
            fprintf(fptr, "Liczba;Czas\n");
            fclose(fptr);
        }
        fptr = fopen(PLIK, a + );
        fprintf(fptr, "%d;", n);
        fprintf(fptr, "%d\n", (int) (cpu_time_used1000));
        fclose(fptr);
        i++;
    }

    return 0;
}