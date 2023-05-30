#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(sizeof(int)); // 申请动态内存
    *p = 123;
    printf("*p = %d\n", *p); // 输出 123

    free(p); // 释放内存

    printf("*p = %d\n", *p); // 错误: 程序运行错误（或者段错误）

    return 0;
}
