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

char* strcatt(char *x, char *y){
    char *ans = (char*)(malloc((strlen(x) + strlen(y)+1 ) * sizeof(char)));
    strcpy(ans, x);
    strcat(ans, y);
    return ans;
}

int main(){
    char *str;
    char original[]="cool?";
    str = copystring(original);
    //printf("%s", str);

    str = strcatt(str, " lukamagaria\n");
    printf("%s", str);
    free(str);
    return 0;
}