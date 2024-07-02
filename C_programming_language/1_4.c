#include <stdio.h>

int main(void) {
    float celc, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 200;
    step = 20;

    celc = lower;

    while (celc <= upper) {
        fahr = celc * 1.8 + 32.0;
        printf("%3.0f %6.0f\n", celc, fahr);
        celc = celc + step;
    }
    return 0;
}