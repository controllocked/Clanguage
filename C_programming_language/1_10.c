#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\b' || c == '\t' || c == '\\') {
            printf("\\");
            printf("\\");
        }
        else {
            putchar(c);
        }
    }
    return 0;
}