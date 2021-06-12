#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 6

int menu();

void wypisz(double [][N], int n);

void wypelnij_losowymi(double [][N], int n);

int wskaz_wiersz();

int wskaz_kolumne();

void wypisz_wiersz(double [][N], int n);

void wypisz_kolumne(double [][N], int n);

void wyswietl_przekatna_lewa_gora(double [][N], int n);

void wyswietl_przekatna_prawy_dol(double [][N], int n);

int main() {
    menu();
    return 0;
}

int menu() {
    int numer_zadania, numer_kolumny, numer_wiersza;
    double t2w[N][N];
    do {
        printf("\n\n\tWitaj w menu!\nWybierz numer programu:");
        printf("\n\t1.Wyswietl wiersz.\n\t2.Wyswietl kolumne.\n\t3.Wyswietl lewa polowe tablicy.\n\t4.Wyswietl prawa polowe tabilcy.\n\nWpisz 0 aby zakonczyc program\nPodaj numer: ");
        scanf("%d", &numer_zadania);
        printf("\nWybrany numer zadania: %d\n", numer_zadania);
        switch (numer_zadania) {
            case 1: {
                wypelnij_losowymi(t2w, N);
                wypisz(t2w, N);
                numer_wiersza = wskaz_wiersz();
                wypisz_wiersz(t2w, numer_wiersza);
                break;
            }
            case 2:
                wypelnij_losowymi(t2w, N);
                wypisz(t2w, N);
                numer_kolumny = wskaz_kolumne();
                wypisz_kolumne(t2w, numer_kolumny);
                break;
            case 3:
                wypelnij_losowymi(t2w, N);
                wypisz(t2w, N);
                printf("\n");
                wyswietl_przekatna_lewa_gora(t2w, N);
                break;
            case 4:
                wypelnij_losowymi(t2w, N);
                wypisz(t2w, N);
                wyswietl_przekatna_prawy_dol(t2w, N);
                break;
            case 0:
                printf("Koniec programu");
                break;
            default:
                printf("Nie ma takiej opcji! Prosze wybrac inna\n");
        }
    } while (numer_zadania != 0);
}

void wypisz(double tab2[][N], int n) {
    printf("Twoja wygenerowana tablica:\n");
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%8.2f", tab2[i][j]);
        }
        printf("\n");
    }
}

void wypelnij_losowymi(double tab2[][N], int n) {
    srand(time(0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tab2[i][j] = rand() % 10 + 1;
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

void wypisz_wiersz(double tab2[][N], int n) {
    printf("Twoj wybrany wiersz\n");
    for (int i = 0; i < N; i++) {
        printf("%8.2f", tab2[n][i]);
    }
}

void wypisz_kolumne(double tab2[][N], int n) {
    printf("Twoja wybrana kolumna\n");
    for (int i = 0; i < N; i++) {
        printf("%8.2f\n", tab2[i][n]);
    }
}

void wyswietl_przekatna_lewa_gora(double tab2[][N], int n) {
    printf("Twoja polowa tablicy\n");
    int j, i;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            printf("%8.2f", tab2[i][j]);
        }
        printf("\n");
    }
}

void wyswietl_przekatna_prawy_dol(double tab2[][N], int n) {
    printf("Twoja polowa tablicy\n");
    int j, i;
    for (i = 0; i < n; i++) {
        for (int k = 0; k < i; k++) {
            printf("\t");
        }
        for (j = i; j < n; j++) {
            printf("%8.2f", tab2[i][j]);
        }
        printf("\n");
    }

}