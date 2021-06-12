#include <stdio.h>

char t1[] = "Robocop";
char t2[] = "cop";

int sizeof_char(char *t) {
    int i;
    for (i = 0; t[i] != 0; i++);
    return i;
}

int strend(char *t1, char *t2) {
    int sizeof_total = sizeof_char(t1);
    int sizeof_end = sizeof_char(t2);
    int size = sizeof_end;
    for (int i = 0; i < size; i++) {
        if (t1[sizeof_total] == t2[sizeof_end]) {
            sizeof_end--;
            sizeof_total--;
        } else {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("%d", strend(t1, t2));
}