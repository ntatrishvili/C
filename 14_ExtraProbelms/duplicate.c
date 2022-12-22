#include <stdio.h>
#include<stdlib.h>

char* duplicate(char *init)
{
    int len = 0;
    char* temp = init;
    while (temp[0] != '\0')
    {
        len++;
        temp++;
    }
    char* ans;
    ans = (char *)malloc((2 * len + 1) * sizeof(char));
    for (int i = 0; i < len; i++)
    {
        ans[2 * i] = init[i];
        ans[2 * i + 1] = init[i];
    }
    return ans;
}

int main()
{
    char* temp = "kaia";
    temp = duplicate(temp);
    printf("%s\n",temp);
    //free(temp);
}