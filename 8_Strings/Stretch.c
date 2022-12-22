#include<stdio.h>
#include<string.h>

void stretch(char wordie[]){
    int i = 0, spaceCounter=0;
    while(wordie[i]!='\0'){
        while(wordie[i]==' '){
            spaceCounter++;
            i++;
        }
        if(spaceCounter>0){
            for(int j=strlen(wordie)-1; j>=i; j--){
                wordie[j+spaceCounter]=wordie[j];
            }
            while(spaceCounter>0){
                wordie[i-1+spaceCounter]=' ';
                spaceCounter--;
            }
        }
        i++;
    }
    printf("%s\n", wordie);
}
int main(){
    char wordie[100] = " me var nia hahaha ";
    stretch(wordie);
    printf("%s", wordie);
    return 0;
}