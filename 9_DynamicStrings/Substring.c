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

char* substring(char* source, int start, int end){
    if (start<0) start = 0;
    if (end>strlen(source)) end = strlen(source);
    char *p = source+start;
    char* ans = memcpy(ans, p, end-start+1);
    //ans[strlen(ans)-1] = '\0';
    return ans;
}

int main(){
    char *str;
    char original[]="cool?";
    str = copystring(original);
    //printf("%s", str);
    str = strcatt(str, " lukamagaria\n");
    //printf("%s", str);
    str = (char*)substring(str, 1, 7);
    printf("%s", str);
    free(str);
    return 0;
}