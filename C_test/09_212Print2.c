// 编写一个程序,生成以下输出:
// For he 1 s a jolly good fellow!
// For he 1 s a jolly good fellow!
// For he 1 s a jolly good fellow !
// Which nobody can deny!
// 除了 main ( ) 函数以外,该程序还要调用两个自定义函数 :一个名为 jollyO , 用于打印前 3 条
// 消息 , 调用一次打印一条 : 另一个函数名为 deny ( > , 打印最后 ... 条消息。

#include<stdio.h>

void jolly(void);
void deny(void);

int main(void){
    jolly();
    deny();
}

void jolly(void){
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
}
void deny(void){
    printf("For he's a jolly good fellow!\n");
}