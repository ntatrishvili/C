#include <stdio.h>

typedef struct Word
{
    int occur;
    char word[31];
    struct Word *left, *right;
} Word;

typedef struct Contact
{
    char *name;
    char phone[21];
    struct Contact *left, *right;
} Contact;

typedef struct Morse
{
    char letter;
    struct Morse *dot, *dash;
}Morse;

void print  