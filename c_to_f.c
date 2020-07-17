#include <stdio.h>

int main() {
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 500;
    step = 10;

    celsius = lower;
    printf("%3s\t%6s\n", "C", "F");

    while(celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f\t%6.2f\n", celsius, fahr);
        celsius += step;
    }
}