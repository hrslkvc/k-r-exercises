#include <stdio.h>

float convert_temp(float fahrenheit);

int main() {
    float fahr, upper, lower, step;
    
    upper = 500;
    lower = 0;
    step = 10;

    fahr = lower;
    printf("%3s\t%6s\n", "F", "C");

    while(fahr <= upper) {
        
        printf("%3.0f\t%6.1f\n", fahr, convert_temp(fahr));
        fahr = fahr + step;
    }
}

float convert_temp(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}