#include <stdio.h>

int main(void) {
    int c, ctab, cn, cs, n2;

    ctab = 0;
    cn = 0;
    cs = 0;
    n2 = 0;

    while ((c = getchar()) != EOF) {
        ++n2;
        if (c == ' ') {
            ++cs;
        }
        else if (c == '\t')
        {
            ++ctab;
        }
        else if (c == '\n') 
        {
            ++cn;
        }
    }
    printf("\nКоличество пробелов: %d\nКоличество табов: %d\nКоличество новых строк: %d\n----------\nКоличество символов обработано: %d", cs, ctab, cn, n2);
}