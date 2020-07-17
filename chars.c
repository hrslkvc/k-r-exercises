#include <stdio.h>

int main() {
    int c;

    // this prints newlines too
    while((c = getchar()) != EOF) {
        putchar(c);
    }
}