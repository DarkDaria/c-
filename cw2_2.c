//zamiana wierszy wskazanych przez użytkownika
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 6

void menu();

void wypisz(double *tab);

void wypelnij_losowymi(double *tab);

int wskaz_wiersz();

void zamien(int index_1, int index_2, double tab[][N]);

int main() {
    menu();
    return 0;
}

void menu() {
    double t2w[N][N];
    int index_wiersza_1, index_wiersza_2;
    printf("Podaj pierwszy numer wiersza ktory chcesz zamienic: ");
    scanf(" %d", &index_wiersza_1);
    printf("Podaj drugi numer wiersza ktory chcesz zamienic: ");
    scanf(" %d", &index_wiersza_2);
    wypelnij_losowymi(*t2w);
    printf("Przed:\n");
    wypisz(*t2w);
    zamien(index_wiersza_1, index_wiersza_2, t2w);
    printf("Po:\n");
    wypisz(*t2w);

}

void zamien(int index_1, int index_2, double tab[][N]) {

    int i;
    for (i = 0; i < N; i++) {
        double temp = tab[index_1][i];
        tab[index_1][i] = tab[index_2][i];
        tab[index_2][i] = temp;
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