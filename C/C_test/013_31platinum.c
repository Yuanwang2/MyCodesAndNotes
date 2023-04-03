#include<stdio.h>

int main(void){
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Lets check it out .\n");
    printf("Please enter your weight in pounts:");

    scanf("%f",&weight);

    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum si worth %.2f .\n",value);
    printf("You are easily worth that If platinum prices\n");
    printf("eat more to maintain your value.\n");

    return 0;
}