#include <stdio.h>
#define MAX_LINE_LENGTH 10

int getLine(char line[], int limit);
void copyLine(char from[], char to[]);

int main() {
    int length = 0;
    int max = 0;
    char current[MAX_LINE_LENGTH];
    char longest[MAX_LINE_LENGTH];

    while((length = getLine(current, MAX_LINE_LENGTH)) > 0) {
        if(length > max) {
            max = length;
            copyLine(current, longest);
        }
    }

    printf("\n%d\n", max);
    printf("%s", longest);
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
    }

    line[i] = '\0';

    while((c = getchar()) != EOF && c != '\n') {
        i++;
    }
    
    return i;
}

void copyLine(char from[], char to[]) {
    int i = 0;

    while((to[i] = from[i]) != '\0') {
        i++;
    }
}
