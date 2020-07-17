#include <stdio.h>
#define MAX_WORD_LENGTH 10

int main() {
    int c = 0;
    int frequencies[MAX_WORD_LENGTH + 1];
    int current_word_length = 0;

    for(int i = 0; i <= MAX_WORD_LENGTH; i++) {
        frequencies[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n' || c == '\t') {
            if(current_word_length > MAX_WORD_LENGTH) {
                frequencies[MAX_WORD_LENGTH]++;
            } else {
                frequencies[current_word_length]++;
            }
            current_word_length = 0;
        } else {
            current_word_length++;
        }
    }

    printf("\n-----------------------------------\n");
    printf("Word length \tFrequency\n");

    for(int i = MAX_WORD_LENGTH; i > 0; i--) {
        printf("%11d \t", i);
        for(int j = 0; j < frequencies[i]; j++) {
            printf("%c", '*');
        }
        printf("\n");
    }
}