#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Osoba {

    char imie[100];
    char nazwisko[100];
    int wiek;
    struct Osoba *next;
} Osoba;

// zlicza dlugosc listy
int dlugosc_listy(Osoba *lista) {
    int d = 0;
    Osoba *wsk = lista;
    while (wsk != NULL) {
        d++;
        wsk = wsk->next;
    }
    return d;
}

// dodaje nowy wezel do listy
void dodaj(Osoba **lista, Osoba *nowa) {
    while (*lista != NULL) lista = &((*lista)->next);
    *lista = nowa;
    nowa->next = NULL;
}

// dodaje osobe do listy
void dodajOsobe(Osoba **lista) {
    Osoba *nowa = (Osoba *) malloc(sizeof(Osoba));
    printf(" Podaj imie: ");
    scanf("%s", nowa->imie);

    printf("Podaj nazwisko: ");
    scanf("%s", nowa->nazwisko);

    printf("Podaj wiek: ");
    scanf("%d", &(nowa->wiek));

    dodaj(lista, nowa);
}

//Wypisuje cala liste
void wypisz_liste(Osoba *lista) {

    Osoba *wsk = lista;

    if (lista == NULL)
        printf("LISTA JEST PUSTA");
    else
        printf("Lista zawiera %d elementow: \n", dlugosc_listy(lista));
    int i = 1;
    while (wsk != NULL) {
        printf("|ID: %d| Imie: %s | Nazwisko: %s | Wiek: %d |\n", i, wsk->imie, wsk->nazwisko, wsk->wiek);
        wsk = wsk->next;
        i++;
    }
}

//Usuwa element z listy
void usun(Osoba **lista, int ID) {
    Osoba *poprzedni = NULL;
    Osoba *wsk = *lista;
    int i;
    for (i = 1; i < ID; i++) {
        poprzedni = wsk;
        wsk = wsk->next;

    }
    if (poprzedni == NULL) {
        (*lista) = (*lista)->next;
        free(wsk);
    } else {
        poprzedni->next = wsk->next;
        free(wsk);
    }
}

// Usuwa osobe po indexie
void usun_osobe(Osoba **lista) {
    int ID;
    printf("Podaj indeks osoby: ");
    scanf("%d", &ID);

    if ((ID > dlugosc_listy(*lista)) || (ID < 1)) {
        printf("Nie ma takiego indeksu");

    } else {
        usun(lista, ID);
    }
}

void wypisz_osobe_lista(Osoba *lista, int ID) {
    int i;
    Osoba *wsk = lista;
    for (i = 1; i < ID; i++) {
        wsk = wsk->next;

    }
    printf("|ID: %d| Imie: %s | Nazwisko: %s | Wiek: %d |\n", i, wsk->imie, wsk->nazwisko, wsk->wiek);
}

//wypisz osobe o podanym indexie
void wypisz_osobe(Osoba *lista) {
    int ID;

    printf("Podaj numer osoby: ");
    scanf("%d", &ID);

    if ((ID > dlugosc_listy(lista)) || (ID < 1)) {
        printf("Nie ma takiego indeksu");

    } else
        wypisz_osobe_lista(lista, ID);

}

int main() {
    Osoba *lista = NULL;
    int option;

    do {
        printf("\n\n MENU");
        printf("\n\n\n 0 Wyjscie z programu");
        printf("\n 1 Wpisz dane osoby do bazy");
        printf("\n 2 Usun osobe o podanym indeksie (id)");
        printf("\n 3 Wyswietl osobe o podanym indeksie (id)");
        printf("\n 4 Wyswietl cala liste\n");
        printf("\n Wpisz numer: ");

        scanf("%d", &option);

        switch (option) {

            case 1:
                printf("DODAWANIE OSOBY\n");
                dodajOsobe(&lista);
                break;

            case 2:
                printf("USUWANIE OSOBY O PODANYM INDEKSIE\n");
                usun_osobe(&lista);
                break;

            case 3:
                printf("WYSWIETL OSOBE O PODANYM INDEKSIE\n");
                wypisz_osobe(lista);
                break;

            case 4:
                printf("WYSWIETL CALA BAZE\n");
                wypisz_liste(lista);
                break;
        }
    } while (option != 0);

}