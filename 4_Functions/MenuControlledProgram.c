#include<stdio.h>

int n=1;
int instr = 0;
int main(){
    do{
        printf("current number: %d\n",n);
        printf("0. Restore the initial value (n = 1)\n"
       "1. Add 1\n"
       "2. Negate the number (+/-)\n"
       "3. Multiple by 2\n"
       "9. Exit\n");
        scanf("%d", &instr);
        switch(instr){
            case 0: 
                restore();
                break;
            case 1:
                add1();
                break;
            case 2:
                negate();
                break;
            case 3: 
                mult2();
                break;
            default: break;
        }
    }while(instr!=9);

    return 0;
}

int restore(void){
    n=1;
}

int add1(void){
    n+=1;
}
int negate(void){
    n = (-1)*n;
}
int mult2(void){
    n *= 2;
}
