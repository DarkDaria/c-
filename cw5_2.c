#include <stdio.h>

double silnia_double(double a) {
    if (a <= 1) return 1;
    else return a * silnia_double(a - 1);
}

int main() {
    double n;
    printf("Podaj liczbe calkowita do 21 (maksymalna dokladna wartosc sili, wieksze liczby moga byc przyblizone) \n");
    scanf("%lf", &n);
    printf("Silnia z tej liczby to:%lf\n", silnia_double(n));
    return 0;
}