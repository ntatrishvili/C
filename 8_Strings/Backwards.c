#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *p;
    scanf("%d", &n);
    p = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", &p[i]);
    }
    for(int i=n-1; i>=0; i--){
        printf("%d\n",p[i]);
    }
    free(p);
    p=NULL;
    return 0;
}