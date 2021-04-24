//podaj 2 slowa i polacz je
#include <stdio.h>
#include <string.h>
int main()
{
    char slowo_1[ 50 ],slowo_2[50];
        printf("Podaj tekst: ");
        scanf("%s",&slowo_1);
        printf("%s\n",&slowo_1);
        printf("Podaj slowo: ");
        scanf("%s",&slowo_2);
    printf( "Polaczone slowo to: %s", strcat(slowo_1, slowo_2));
    return 0;
}