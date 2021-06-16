//zapis wyniku x i y funkcji kwadratowej stworzonej przez dane podane przez uzytkownika.
//zapis wyniku do pliku binarnego
//zapis wyniku do pliku tekstowego

#include <stdio.h>
#include <stdlib.h>

#define BIN "dane.bin"
#define CSV "dane.csv"

void getFunctionProperties(double *a, double *b, double *c, double *xmin, double *xmax, int *n);

void calculateText(double a, double b, double c, double xmin, double xmax, int n);

void calculateBin(double a, double b, double c, double xmin, double xmax, int n);

void readFromFile();

void writeDouble(double value, FILE *file);

double readDouble(FILE *file);

void writeInt(int value, FILE *file);

int readInt(FILE *file);

int main(int argc, char *argv[]) {
    printf("%d\n", argc);
    printf("%s\n", argv[0]);
    printf("%s\n", argv[1]);
    printf("%s\n", argv[2]);
    printf("%s\n", argv[3]);
    printf("%s\n", argv[4]);
    printf("%s\n", argv[5]);
    printf("%s\n", argv[6]);
    double a, b, c, xmin, xmax;
    int n;
    if (argc == 7) {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        c = atoi(argv[3]);
        xmin = atoi(argv[4]);
        xmax = atoi(argv[5]);
        n = atoi(argv[6]);
        printf("%2.lf\n", a);
        printf("%2.lf\n", b);
        printf("%2.lf\n", c);
        printf("%2.lf\n", xmin);
        printf("%2.lf\n", xmax);
        printf("%2.lf\n", n);
        calculateText(a, b, c, xmin, xmax, n); //obliczenia funkcji oraz zapis do pliku csv
        calculateBin(a, b, c, xmin, xmax, n); //obliczenia funkcji zapus do pliku bin
    } else {
        getFunctionProperties(&a, &b, &c, &xmin, &xmax,&n);//getFunctionProperties(&a, &b, &c, &xmin, &xmax,&n); //pobieranie danych od uzytkownika (a,b,c,zakres min,zakres max,ilosc wartosci danej funkcji)
        calculateText(a, b, c, xmin, xmax, n); //obliczenia funkcji oraz zapis do pliku csv
        calculateBin(a, b, c, xmin, xmax, n); //obliczenia funkcji zapus do pliku bin
    }
    return 0;
}

void getFunctionProperties(double *a, double *b, double *c, double *xmin, double *xmax, int *n) {
    printf(" Podaj wspolczynnik kierunkowy prostej a:");
    scanf("%lf", a);
    printf("\nPodaj wspolczynnik kierunkowy prostej b:");
    scanf("%lf", b);
    printf("\nPodaj wspolczynnik kierunkowy prostej c:");
    scanf("%lf", c);
    printf("\nPodaj zakres liczb dla ktorych chcesz wyliczyc funkcje");
    printf("\nOd:");
    scanf("%lf", xmin);
    printf("\nDo:");
    scanf("%lf", xmax);
    printf("\nPodaj liczbe wartosci funkcji:");
    scanf("%d", n);
}

void calculateText(double a, double b, double c, double xmin, double xmax, int n) {
    double x, zakres, y;

    FILE *fptr = fopen(CSV, "w+");

    zakres = (xmax - xmin) / (n - 1);

    fprintf(fptr, "x;y\n");
    for (int i = 0; i < n; i++) {
        x = xmin + i * zakres;
        y = a * x * x + b * x + c;
        printf("f(%.2lf) = %.2lf\n", x, y);
        fprintf(fptr, "%.2lf;%.2lf\n", x, y);
    }
    fclose(fptr);

    printf("----------------------------------\n");
    printf("Zapisano dane do pliku tekstowego!\n");
    printf("----------------------------------\n");
}

void calculateBin(double a, double b, double c, double xmin, double xmax, int n) {
    double zakres, x, y;

    FILE *fptr = fopen(BIN, "wb");

    writeDouble(a, fptr);
    writeDouble(b, fptr);
    writeDouble(c, fptr);
    writeInt(n, fptr);

    zakres = (xmax - xmin) / (n - 1);

    for (int i = 0; i < n; i++) {
        x = xmin + i * zakres;
        y = a * x * x + b * x + c;
        writeDouble(x, fptr);
        writeDouble(y, fptr);
    }
    fclose(fptr);

    printf("---------------------------------\n");
    printf("Zapisano dane do pliku binarnego!\n");
    printf("---------------------------------\n");

    readFromFile();
}

void readFromFile() {
    double a, b, c, x, y;
    int n;
    FILE *fptr = fopen(BIN, "rb");

    printf("----------------------------------\n");
    printf("Odczyt danych z pliku binarnego...\n");
    printf("----------------------------------\n");
    a = readDouble(fptr);
    b = readDouble(fptr);
    c = readDouble(fptr);
    n = readInt(fptr);

    printf("f(x) = %.2lfx^2 + %.2lfx + %.2lf\n", a, b, c);

    for (int i = 0; i < n; i++) {
        x = readDouble(fptr);
        y = readDouble(fptr);
        printf("f(%.2lf)= %.2lf\n", x, y);
    }
    fclose(fptr);
}

void writeDouble(double value, FILE *file) {
    fwrite(&value, sizeof(double), 1, file);
}

double readDouble(FILE *file) {
    double value;
    fread(&value, sizeof(double), 1, file);
    return value;
}

void writeInt(int value, FILE *file) {
    fwrite(&value, sizeof(int), 1, file);
}

int readInt(FILE *file) {
    int value;
    fread(&value, sizeof(int), 1, file);
    return value;
}