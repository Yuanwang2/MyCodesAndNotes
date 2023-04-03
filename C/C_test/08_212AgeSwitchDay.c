//写一个程序把你的年龄转换编成天数,并显示这两个值 这里不用考虑闰年的问题。
#include<stdio.h>

int main(void){
    int age;
    int day;

    printf("Input Age :");
    scanf("%d",&age);

    day = 365*age;
    printf("Your live %d days",day);
}