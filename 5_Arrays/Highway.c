#include<stdio.h>

int main (){
    int hour, minute, speed;
    int data[10000][3];
    int i=0;
    //read all the lines and put into the array
    scanf("%d %d %d", &hour, &minute, &speed);
    while(hour!=0 || minute!=0 || speed!=0){
        data[i][0] = hour;
        data[i][1] = minute;
        data[i][2] = speed;
        i++;
        scanf("%d %d %d", &hour, &minute, &speed);
    }
    //find max speed in each hour
    int current_hour = 0;
    int current_max = 0;
    for( int j = 0; j <i; j++){
        if(data[j][0] == current_hour){
            if(data[j][2]>current_max){
                current_max = data[j][2];
                printf("%d", current_max);
            }
        }
        else{
            if(current_max>0){
                printf("%2.d:00-%2.d:59 -> %d km/h", current_hour, current_hour, speed);
            }
            current_hour++;
            current_max=0;
        }
         printf("%2.d:00-%2.d:59 -> %d km/h", current_hour, current_hour, speed);
    }








    // char arr[5] = {'0', '-', '0', '-', '0'};
    // char line[23];
    // char a;
    // int num;

    // //reading each line
    // int i = 0;
    // int temp = scanf("%c", &a);
    // while (temp == 1) {
    //     line[i]=a;
    //     i++;
    //     temp = scanf("%c", &a);
    // }
    // //lets suppose the speed is a 3-digit number for now
    
    // return 0;
}