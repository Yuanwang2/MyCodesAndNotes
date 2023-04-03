// 编写一个程序, 生成以下输出 :
// Brazil, Russia, India, China
// India, China,
// Brazil, Russia
//  f
// 除了 main ( ) 以外 ,
//  该程序还要调用两个自定义函数: 一个名为 br ( ) ,
//  调用一次打印一次“ Brazil,
// Russia " ; 另一个名为 ic ( ) , 调用一次打印一次 “ India , China ” 。 其他内容在 main ( > 函数中
// 完成 。

#include<stdio.h>

void br(void);
void ic(void);
void enter(void);

int main(void){
    br();
    ic();
    enter();
    ic();
    enter();
    br();
}

void br(void){
    printf("Brazil,Russia ");
}

void ic(void){
    printf("India,China");
}

void enter(void){
    printf("\n");
}

