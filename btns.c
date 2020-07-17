#include <stdio.h>

int main() {
    int c, b = 0, t = 0, n = 0;
    
    while((c = getchar()) != EOF) {
        if(c == ' ') {
            b++;
        } else if(c == '\t') {
            t++;
        } else if(c == '\n') {
            n++;
        }
    }

    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", b, t, n);
}