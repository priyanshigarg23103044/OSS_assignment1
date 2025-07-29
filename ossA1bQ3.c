#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 50
#define MAX_PARA_LEN 2000

// Structure to store a word and its frequency
typedef struct {
    char word[MAX_WORD_LEN];
    int count;
} WordFrequency;

int main() {
    char paragraph[MAX_PARA_LEN];
    WordFrequency word_freq[MAX_WORDS];
    int num_unique_words = 0;

    printf("Enter a paragraph:\n");
    fgets(paragraph, MAX_PARA_LEN, stdin);

    // Remove trailing newline character if present
    paragraph[strcspn(paragraph, "\n")] = 0;

    char *token = strtok(paragraph, " .,;!?\t\n"); // Delimiters for words

    while (token != NULL && num_unique_words < MAX_WORDS) {
        // Convert word to lowercase for case-insensitive counting
        for (int i = 0; token[i]; i++) {
            token[i] = tolower(token[i]);
        }

        int found = 0;
        for (int i = 0; i < num_unique_words; i++) {
            if (strcmp(word_freq[i].word, token) == 0) {
                word_freq[i].count++;
                found = 1;
                break;
            }
        }

        if (!found) {
            if (num_unique_words < MAX_WORDS) {
                strcpy(word_freq[num_unique_words].word, token);
                word_freq[num_unique_words].count = 1;
                num_unique_words++;
            } else {
                fprintf(stderr, "Warning: Maximum number of unique words reached. Some words might not be counted.\n");
            }
        }

        token = strtok(NULL, " .,;!?\t\n");
    }

    printf("\nWord Frequencies:\n");
    for (int i = 0; i < num_unique_words; i++) {
        printf("%s: %d\n", word_freq[i].word, word_freq[i].count);
    }

    return 0;
}
