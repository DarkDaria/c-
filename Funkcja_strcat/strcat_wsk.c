//podaj 2 slowa i polacz je
#include <stdio.h>
#include <string.h>

char *strcat(char *a, const char *b) {
    char *p = a;
    while (*a)a++;
    while (*a++ = *b++);
    return p;
}

int main() {
    char str[24];
    strcpy(str, "test");
    strcat(str, "test1");
    strcat(str, "test2");

    printf("%s", str);
    return 0;
}