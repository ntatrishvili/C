#include <stdio.h>
#include <stdlib.h>

typedef struct Delivery
{
    int packetCode;
    int year;
    int month;
    int day;
    char targetAddress[200];
    struct Delivery *next;
} Delivery;

Delivery *insert(Delivery *head)
{
    int temp;
    Delivery *last;
    last = (Delivery *)malloc(sizeof(Delivery));
    printf("please input the packetCode: ");
    scanf("%d", &temp);
    last->packetCode = temp;
    printf("\nplease input the year: ");
    scanf("%d", &temp);
    last->year = temp;
    printf("\nplease input the month: ");
    scanf("%d", &temp);
    last->month = temp;
    printf("\nplease input the day: ");
    scanf("%d", &temp);
    last->day = temp;
    printf("\nplease input the target adress (no more than 199 characters:");
    temp = 0;
    char c;
    scanf("%c", &c);
    while (c != '\n' && temp < 199)
    {
        last->targetAddress[temp] = c;
        scanf("%c", &c);
        temp++;
    }
    last->targetAddress[temp] = '\0';
    last->next = head;
    return last;
}

int *filterByTime(Delivery *head, int year, int month, int day, int *len)
{
    if (head == NULL)
        return 0;
    Delivery *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        if (temp->year == year && temp->month == month && temp->day == day)
            size++;
    }
    len = &size;
    int i = 0, *ans;
    ans = (int *)malloc(size * sizeof(int));
    temp = head;
    while (temp != NULL)
    {
        if (temp->year == year && temp->month == month && temp->day == day)
            ans[i] = temp->packetCode;
        i++;
    }
    return ans;
}

int main(){
    Delivery* head=NULL;
    for(int i =0; i<50; i++){
        head = insert(head);
    }
    int len=0;
    int* codes = filterByTime(head, 2022, 12, 8, &len);
    for(int i=0; i<len; i++){
        printf("%d ",codes[i]);
    }
    //aq ideashi free-ebi unda mara aravis utqvams dafreeto da me armewera idk
}