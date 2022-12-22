#include<stdio.h>
 
int main() {
    int n;
 
    printf("Enter the number of rows. ");
    scanf("%d", & n);

    for (int i; i<=n; i++){
        for ( int j=1; j<=n-1;j++){

        
        print(" ");
        }
        for(int j=1;j<=(2*n-1);j++){
            printf("o");
           printf("\n");
        }

    }
    
}
