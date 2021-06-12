#include <stdio.h>
#define PLIK "dane.bin"

void calculate();
void readFromFile();
void writeDouble(double value, FILE *file);
double readDouble(FILE *file);
void writeInt(int value, FILE *file);
int readInt(FILE *file);

int main() {
    calculate();
    readFromFile();
    return 0;
}

void calculate() {
    double a,b,c,x,xmin,xmax,zakres,y;
    int n;
    FILE *fptr= fopen(PLIK, "wb");

    printf(" Podaj wspolczynnik kierunkowy prostej a:");
    scanf("%lf",&a);
    printf("\nPodaj wspolczynnik kierunkowy prostej b:");
    scanf("%lf",&b);
    printf("\nPodaj wspolczynnik kierunkowy prostej c:");
    scanf("%lf",&c);
    printf("\nPodaj zakres liczb dla ktorych chcesz wyliczyc funkcje");
    printf("\nOd:");
    scanf("%lf",&xmin);
    printf("\nDo:");
    scanf("%lf",&xmax);
    printf("\nPodaj liczbe wartosci funkcji:");
    scanf("%d",&n);

    writeDouble(a, fptr);
    writeDouble(b, fptr);
    writeDouble(c, fptr);
    writeInt(n, fptr);

    zakres=(xmax-xmin)/(n-1);

    for (int i = 0; i < n; i++) {
        x = xmin + i*zakres;
        y = a*x*x + b*x + c;
        writeDouble(x, fptr);
        writeDouble(y, fptr);
    }
    fclose(fptr);

    printf("-----------------------\n");
    printf("Zapisano dane do pliku!\n");
    printf("-----------------------\n");
}

void readFromFile(){
    double a,b,c,x,y;
    int n;
    FILE *fptr= fopen(PLIK, "rb");

    printf("------------------------\n");
    printf("Odczyt danych z pliku...\n");
    printf("------------------------\n");
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

void writeDouble(double value, FILE *file){
    fwrite(&value,sizeof(double), 1, file);
}

double readDouble(FILE *file){
    double value;
    fread(&value, sizeof(double),1,file);
    return value;
}

void writeInt(int value, FILE *file){
    fwrite(&value,sizeof(int), 1, file);
}

int readInt(FILE *file){
    int value;
    fread(&value, sizeof(int),1,file);
    return value;
}