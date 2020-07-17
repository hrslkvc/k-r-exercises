#include <stdio.h>
#define TOTAL_CHARS 127
int main() {
    int c = 0;
    int chars[TOTAL_CHARS];

    for(int i = 33; i < TOTAL_CHARS; i++) {
        chars[i] = 0;
    }

    while((c = getchar()) != EOF) {
        chars[c]++;
    }

    for(int i = 33; i < TOTAL_CHARS; i++) {
        printf("%c\t%d\n", i, chars[i]);
    }
}