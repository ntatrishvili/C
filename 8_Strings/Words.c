#include<stdio.h>
#include<string.h>

void words(char source[]){
    int i=0, isFirstSpace=2;
    while(source[i]!='\0'){
        if(source[i]!=' '){
            printf("%c", source[i]);
            isFirstSpace=1;
        }
        else if(isFirstSpace==1){
            printf("\n");
            isFirstSpace=0;
        }
        i++;
    }
    printf("\n");
}

int main(){
    char source[] = "    life's good?   ";
    for(int i =0; i<100; i++){
        printf("input your thingie: ");
        scanf("%s", source);
        words(source);
    }
    return 0;
}