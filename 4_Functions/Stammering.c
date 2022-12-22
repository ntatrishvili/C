#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(void) {
    char c='a';
    bool ans = false;
    while (scanf("%c", &c) == 1) {
        if (isVowel(tolower(c)) == true)
            printf("%ch%c", c, c);
        else
            printf("%c", c);
    }
 
    return 0;
}

bool isVowel(char c){
    bool ans = false;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        ans = true;
    }
    return ans;
}