#include<stdio.h>

int isLeap (int year);

int main (){
    int year;
    scanf("%d", &year);
    int flag = isLeap(year);
    if(flag==1){
        printf("True\n");
    }
    else
        printf("False\n");
    return 0;
}

int isLeap (int year){
    if(year%4 == 0){
        return 1;
    }
    else if(year%100==0){
        if (year%400==0){
            return 1;
        }
        else return 0;
    }
}