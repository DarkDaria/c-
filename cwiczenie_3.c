//wyliczenie sredniej liczb podanych przez uzytkownika

#include <stdio.h>
#include <stdlib.h>

double avg(int *tab, int ilosc_liczb)
{
    double suma = 0;
    for(int i = 0; i < ilosc_liczb; i++)
    {
        suma += tab[i];
    }
    return suma / ilosc_liczb;
}

int main()
{

    int ilosc_liczb;
    printf("Podaj ilosc liczb do obliczen:");
    scanf("%d",&ilosc_liczb);
    int *liczby = malloc(ilosc_liczb * sizeof(int));
    int numer = 0, count = 0;
    do
    {
        printf("Podaj liczbe do obliczen\n");
        scanf("%u", &numer);
        liczby[count++] = numer;
    }
    while(count<ilosc_liczb);

    printf("Srednia z liczb to: %f\n",avg(liczby,ilosc_liczb));

    free(liczby);
    return 0;
}