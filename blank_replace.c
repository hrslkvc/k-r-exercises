#include <stdio.h>

int main() {
    int c = 0;
    c = getchar();

    while(c != EOF) {

        putchar(c);
        c = getchar();

        if(c == ' ') {
            putchar(c);
            while((c = getchar()) == ' ');
        }
    }
}