#include <stdio.h>

typedef struct Movie
{
    char title[100];
    char director[51];
    double rating;
    int year;
    int watchcount;
    struct Movie *left;
    struct Movie *right;
} Movie;

void printTitles(Movie *head)
{
    if (head == NULL)
        return;
    printTitles(head->left);
    if (head->rating > 4.9)
        printf("%s\n", head->title);
    printTitles(head->right);
}

int watchedThisYear(Movie *head, int year)
{
    if(head==NULL)
        return 0;
    int count = 0;
    if(head->year == year)
        count++;
    count += watchedThisYear(head->left, year) + watchedThisYear(head->right, year);
    return count;
}
