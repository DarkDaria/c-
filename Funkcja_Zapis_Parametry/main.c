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

int main(int argc, char *aragv[]) {

    if (*aragv[argc] = NULL) {
        double a, b, c, xmin, xmax;
    }
    double a = atof(aragv[1]);
    double b = atof(aragv[2]);
    double c = atof(aragv[3]);
    double xmin = atof(aragv[4]);
    double xmax = atof(aragv[5]);
    printf("%f", a);
    int n;
    getFunctionProperties(&a, &b, &c, &xmin, &xmax, &n);

    calculateText(a, b, c, xmin, xmax, n);

    calculateBin(a, b, c, xmin, xmax, n);

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