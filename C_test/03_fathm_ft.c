//把 2 音寻转换成英寸
#include<stdio.h>

int main(void){
    int feet,fathomes;

    fathomes = 2;
    feet = 6 * fathomes;
    printf("There are %d feet in %d fathomes!\n",feet,fathomes);
    printf("Yes,I said %d feet!\n",6*fathomes);
    
    return 0;
}