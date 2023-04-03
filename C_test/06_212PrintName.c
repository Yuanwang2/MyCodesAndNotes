/*编写一个程序,调用一次 printfO 函数,把你的姓名打印在一行。 再调用一次 printfO 函数 ,把你的
姓名分别打印在两行 。 然后,再调用两次 printfO函数,把你的姓名打印在一行。 输出应如下所示(当
然要把示例的内容换成你的姓名*/
#include<stdio.h>

int main(void){
    printf("Gustav Mahler\n");
    printf("Gustav \nMahler\n");
    printf("Gustav");
    printf("Mahler");

}