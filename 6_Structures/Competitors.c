#include <stdio.h>
 
typedef struct Date {
    int year, month, day;
} Date;
 
typedef struct Competitor {
    char name[31];
    Date birth;
    int rank;
} Competitor;
 
void Date_print(Date d);
 
void Competitor_print(Competitor c);
 
int main() {
    Competitor competitors[5] = {
        { "Am, Erica", {1984, 5, 6}, 1 },
        { "Abnorm, Al", {1982, 9, 30}, 3 },
        { "Pri, Mary", {1988, 8, 25}, 2 },
        { "Duck, Ling", {1979, 6, 10}, 5 },
        { "Mac, Donald", {1992, 4, 5}, 4 },
    };

    /* name of competitor 0 - printf %s */
    printf("%s", competitors[0].name);
    /* rank of competitor 2 */
    printf("%s", competitors[1].rank);
    /* birth date of competitor 4, use the given function */
    printf("%s", competitors[3].birth);
    /* the first letter of the name of competitor 1 (a string is an array of characters) */
    printf("%c", competitors[0].name[0]);
    /* is competitor 1 among the best three? yes/no, may use ?: operator */
    printf(competitors[0].rank<=3? "yes" : "no");
    /* is competitor 4 faster than competitor 3? */
    printf(competitors[3].rank<competitors[2].rank ? "4 is faster" :"3 is faster");
    /* was competitor 1 born in the same year as competitor 2? */
    printf(competitors[0].birth.year == competitors[1].birth.year ? "comp 1 and 2 are born in the same year" : "NOOO they are not born in the same year!");
    /* complete the Competitor_print() function,
     * then print all data of competitor 1 */
     
    /* at last print all data of all competitors. */
 
    return 0;
}
 
void Date_print(Date d) {
    /* print year, month and day */
    printf("%d. %d. %d ", d.year, d.month, d.day);
}
 
void Competitor_print(Competitor c) {
    /* print all data of the competitor */
    printf("%s, ranked %d was born at", c.name, c.rank);
    Date_print(c.birth);
}