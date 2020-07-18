#include <stdio.h>
#define MAX_LINE_LENGTH 1000

int getLine(char line[], int limit);
void reverseLine(char line[], char reversedLine[], int lineLength);

int main() {
    int length = 0;
    char line[MAX_LINE_LENGTH];
    char reversedLine[MAX_LINE_LENGTH];

    while((length = getLine(line, MAX_LINE_LENGTH)) > 0) {
        reverseLine(line, reversedLine, length);
        printf("%s", reversedLine);
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
    }

    line[i] = '\0';

    return i;
}

void reverseLine(char line[], char reversedLine[], int lineLength) {
    int i;
    int len = lineLength;
    for(i = 0; i < len; i++) {
        reversedLine[i] = line[lineLength-1];
        lineLength--;
    }
    reversedLine[i] = '\0';
}
