#include<stdio.h>
#include<string.h>


char* copystring(char str[]){
    char *ans=(char*)(malloc((strlen(str) +1) * sizeof(char)));

    int i=0;
    while(str[i] != '\0'){
        ans[i]=str[i];
        i++;
    }
    ans[i] = '\0';
    return ans;
}

int main(){
    char *str;

    char original[]="cool?\n";

    str = copystring(original);

    printf("%s", str);

    free(str);
    return 0;
}