// 编写一个程序, 创建一个整型变量 toes , 并将 toes 设置为 10。 程序中还要计算 toes 的两倍和
// toes 的平方。 该程序应打印 3 个值 , 并分别描述以示区分。
#include<stdio.h>

int main(void){
    int toes = 10;
    printf("Toes=%d ToesSquare=%d ToesCube=%d",toes,toes*toes,toes*toes*toes);

    return 0;
}