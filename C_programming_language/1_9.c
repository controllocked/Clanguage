#include <stdio.h>

int main(void) {
    char lastspace = 0;
    int c;

    while ((c=getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            lastspace = 0;
        }
        if (c == ' ') {
            if (!lastspace) {
                putchar(c);
                lastspace = 1;
            }
        }
    }
    return 0;
}

