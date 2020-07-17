#include <stdio.h>

int main() {
    float fahr, celsius;
    float upper, lower, step;

    upper = 500;
    lower = 0;
    step = 10;

    fahr = lower;
    printf("%3s\t%6s\n", "F", "C");

    while(fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}