#include <stdio.h>

int main () {
    float fahr;

    printf("%3c\t%6c\n", 'F', 'C');

    for(fahr = 300; fahr >= 0; fahr = fahr - 20){
        printf("%3.0f\t%6.2f\n", fahr, (5.0 / 9.0) * (fahr-32.0));
    }
}
