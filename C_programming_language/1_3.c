#include <stdio.h>

int main(void) {
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr\tCelc\n-------------\n");
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f %8.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
    return 0;
}