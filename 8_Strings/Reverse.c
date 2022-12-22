#include<stdio.h>
#include<string.h>

void reverse1 (char  in[], char out[]){
    int counter=0;
    for (int i =strlen(in)-1; i>=0; i--){
        out[counter++]= in[i];
    }
    out[counter]='\0';
}

int main(){



    return 0;
}