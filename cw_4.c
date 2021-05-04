#include <stdio.h>
char slowo_pierwsze[] = "Robocop";
char slowo_drugie[] = "cop";

int dlugosc_slowa(char *tekst) {
    int i;
    for (i = 0; tekst[i] != 0; i++); //zmierzenie dlugosci ciagu znakow,szukamy konca ciagu czyli 0 w kodzie Ascii
    return i;
}

int sprawdz_koniec_wyrazu(char *slowo_glowne, char *slowo_koniec) {
    int rozmiar_caly = dlugosc_slowa(slowo_glowne);
    int rozmiar_konca = dlugosc_slowa(slowo_koniec);
    int size = rozmiar_konca;
    for (int i = 0; i < size; i++) {
        if (slowo_glowne[rozmiar_caly] == slowo_koniec[rozmiar_konca]) {
            rozmiar_konca--;
            rozmiar_caly--;
        } else {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("%d", sprawdz_koniec_wyrazu(slowo_pierwsze, slowo_drugie));
}