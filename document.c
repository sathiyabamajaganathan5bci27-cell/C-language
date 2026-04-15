#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_word(char* text) {
    return strdup(text);
}

char** get_sentence(char* text) {
    char** sentence = NULL;
    char* word = strtok(text, " ");
    int count = 0;
    while (word != NULL) {
        sentence = realloc(sentence, sizeof(char*) * (++count));
        sentence[count-1] = get_word(word);
        word = strtok(NULL, " ");
    }
    return sentence;
}

char*** get_paragraph(char* text) {
    char*** paragraph = NULL;
    char* sent_ptr = strtok(text, ".");
    int count = 0;
    while (sent_ptr != NULL) {
        paragraph = realloc(paragraph, sizeof(char**) * (++count));
        paragraph[count-1] = get_sentence(sent_ptr);
        sent_ptr = strtok(NULL, ".");
    }
    return paragraph;
}

char**** get_document(char* text) {
    char**** doc = NULL;
    char* para_ptr = strtok(text, "\n");
    int count = 0;
    while (para_ptr != NULL) {
        doc = realloc(doc, sizeof(char***) * (++count));
        doc[count-1] = get_paragraph(para_ptr);
        para_ptr = strtok(NULL, "\n");
    }
    return doc;
}

char*** kth_paragraph(char**** doc, int k) {
    return doc[k-1];
}

char** kth_sentence_in_mth_paragraph(char**** doc, int k, int m) {
    return doc[m-1][k-1];
}

char* kth_word_in_mth_sentence_of_pth_paragraph(char**** doc, int k, int m, int p) {
    return doc[p-1][m-1][k-1];
}

// Minimal main to show structure
int main() {
    // In a real scenario, you'd read the full string first
    // This code implements the Alicia logic for the 4D pointer structure.
    return 0;
}
