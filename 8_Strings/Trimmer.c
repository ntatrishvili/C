#include<stdio.h>
#include<string.h>

void trim(char source[], char destination[]){
    int i=0, firstLastSpace=0,lastFirstSpace=-1;
    char c;
    while(source[i]==' '){
        i++;
    }
    firstLastSpace=i;
    while(source[i]!='\0'){
        if( i>0 && source[i]==' ' && source[i-1]!=' '){
            lastFirstSpace=i;
        }
        i++;
    }
    for(int k = firstLastSpace; k<lastFirstSpace; k++){
        destination[k-firstLastSpace]=source[k];
    }
}

int main(){
    char source[] = "    life's good?   ";
    char destination[100];
    trim(source, destination);
    printf("%s", destination);
    return 0;
}