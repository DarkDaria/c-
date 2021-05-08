#include <stdio.h>

void silnia_int() {
    int wynik, n, i;
    wynik = 1;
    printf("Podaj liczbe do 12 \n");
    scanf("%d", &n);
    if (n < 0 || n > 12)
        printf("Wpisales liczbe ujemna lub wieksza od 12, z ktorej nie mozna obliczyc n! dla int \n");
    else {
        i = n;
        while (i > 0)
            wynik *= i--;
        printf("%d! = %d \n", n, wynik);
    }
}

int main() {
    silnia_int();
    return 0;
}