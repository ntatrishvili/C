#include<stdio.h>
 
int main() {
    int x;
 
    printf("Dear user!");
    printf("Enter a number, I will print its square!\n");
    scanf("%d", &x);
    x = x*x;
    printf("x square is: %d", x);
    return 0;
}

/*
line 1: not studio -> stdio
line 1: no ; needed
line 3: not {} -> ()
line 4 & 5: adding \n would make the output more readable but not really an error
line 8: not x -> &x
line 11: needs return 0;
*/