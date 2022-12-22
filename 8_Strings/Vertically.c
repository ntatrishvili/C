#include<stdio.h>


int main(){
    char word[100];
    int i = 0;
    printf("please ipnut your word horizontally (like a normal person): \n");
    scanf("%s", word);
    printf("your word, but vertically: \n");
    while(word[i] != '\0'){
        printf("%c\n", word[i]);
        i++;
    }
    return 0;
}