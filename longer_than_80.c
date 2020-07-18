#include <stdio.h>
#define MAX_LINE_LENGTH 1000
#define MINIMUM_LENGTH 80

int getLine(char line[], int limit);

int main() {
    int length = 0;
    char line[MAX_LINE_LENGTH];

    while((length = getLine(line, MAX_LINE_LENGTH)) > 0) {
        if(length > MINIMUM_LENGTH) {
           printf("%s", line);
        }
    }
}

int getLine(char line[], int limit) {
    int c;
    int i;

    for(i = 0; i<limit-1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }

    if(c == '\n') {
        line[i] = c;
        i++;
    } else {
        while((c = getchar()) != EOF && c != '\n') {
            i++;
        }
    }

    line[i] = '\0';
    
    return i;
}
