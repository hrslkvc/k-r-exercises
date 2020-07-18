#include <stdio.h>
#define MAX_LINE_LENGTH 1000

int getLine(char line[], int limit);

int main() {
    int length = 0;
    char line[MAX_LINE_LENGTH];

    while((length = getLine(line, MAX_LINE_LENGTH)) > 0) {
           printf("%s", line);
    }
}

int getLine(char line[], int limit) {
    int c;
    int i;

    for(i = 0; i<limit-1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
            printf("i val: %d\n", i);

    while(line[i-1] == ' ' || line[i-1] == '\t') {
        i--;
    }

    if(c == '\n') {
        line[i] = c;
        i++;
    }

    line[i] = '\0';

    return i;
}
