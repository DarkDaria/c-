//Musze wykonac refaktor kodu bo duzo funkcji jest do siebie podobnych a moze da sie optymalizowac.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 6

void menu();

void wypisz(double *tab);

void wypelnij_losowymi(double *tab);

int wskaz_wiersz();

int wskaz_kolumne();

int wskaz_przekatna();

void wypisz_wiersz(double *tab, int n);

void wypisz_kolumne(double *tab, int n);

void wyswietl_przekatna(double *tab, int n);

int main() {
    menu();
    return 0;
}

void menu() {
    int numer_zadania, numer_kolumny, numer_wiersza, rodzaj_przekatnej;
    double t2w[N][N];
    printf("Witaj w menu,\nWybierz numer programu:");
    printf("\n 1.Wyswietl wiersz\n 2.Wyswietl kolumne\n 3.Wyswietl przekatna\nPodaj numer: ");
    scanf("%d", &numer_zadania);
    printf("\nWybrany numer zadania: %d\n", numer_zadania);
    switch (numer_zadania) {
        case 1: {
            wypelnij_losowymi(&t2w);
            wypisz(&t2w);
            numer_wiersza = wskaz_wiersz();
            wypisz_wiersz(&t2w, numer_wiersza);
        }
            break;
        case 2:
            wypelnij_losowymi(*t2w);
            wypisz(t2w);
            numer_kolumny = wskaz_kolumne();
            wypisz_kolumne(t2w, numer_kolumny);
            break;
        case 3:
            //przekatna wyswietlanie plus zapytanie od ktorej strony DO DOKOŃCZENIA
            wypelnij_losowymi(*t2w);
            wypisz(t2w);
            rodzaj_przekatnej = wskaz_przekatna();
            wyswietl_przekatna(t2w, rodzaj_przekatnej);
            break;
        default:
            printf("Nie ma takiej opcji! Prosze wybrac inna\n");
    }
}

void wypisz(double *tab) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%8.2f", *(tab + i * N + j));
        }
        printf("\n");
    }
}

void wypelnij_losowymi(double *tab) {
    srand(time(0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            *(tab + (i * N + j)) = rand() % 10 + 1;
        }
    }
}

int wskaz_wiersz() {
    int numer;
    printf("Podaj numer wiersza: \n");
    scanf("%d", &numer);
    return --numer;
}

int wskaz_kolumne() {
    int numer;
    printf("Podaj numer kolumny: \n");
    scanf("%d", &numer);
    return --numer;
}

int wskaz_przekatna() {
    int numer;
    printf("Przekatna po lewej numer 1,Przekadna od prawej numer 2: \n");
    scanf("%d", &numer);
    return numer;
}

void wypisz_wiersz(double *tab, int n) {

    for (int i = 0; i < N; i++) {
        printf("%8.2f", *(tab + i * N + n));
    }
}

void wypisz_kolumne(double *tab, int n) {

    for (int i = 0; i < N; i++) {
        printf("%8.2f\n", *(tab + i * N + n));
    }
}

void wyswietl_przekatna(double *tab, int n) {
    for (int i = n; i <= N; ++i) {
        for (int j = i; j <= N; ++j) {
            printf("%2.f ", j);
        }

        printf("\n");
    }
}