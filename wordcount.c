#include <stdio.h>

#define IN 1
#define OUT 0
int main() {
    int c, charcount, linecount, wordcount, state;

    c = charcount = linecount = wordcount = 0;
    state = OUT;

    while((c = getchar()) != EOF) {
        ++charcount;

        if(c == '\n') {
            linecount++;
        }
        
        if(c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if(state == OUT) {
            state = IN;
            ++wordcount;
        }
    }

    printf("chars: %d\nlines: %d\nwords: %d\n", charcount, linecount, wordcount);
}