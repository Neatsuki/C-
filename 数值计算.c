#include <stdio.h>

int main(void) 
{
    int a = 20, 
        b = 10, c;
        
    // 求两个数的和
    c = a + b;
    printf("数值等于: %d\n", c);
    
    // 求两个数的差
    c = a - b;
    printf("数值等于：%d\n", c);
    
    // 求两个数的积
    c = a * b;
    printf ("数值等于：%d\n", c);
    
    // 求一个数的平方
    int d = 5;
    c = d * d;
    printf("5的平方是%d\n", c);
    
    // 求两个数的商和余数
    int e = 13, f = 4;
    c = e / f;
    int remainder = e % f;
    printf("%d除以%d的商是%d，余数是%d\n", e, f, c, remainder);
    
    // 求一个数的倒数
    float g = 3.0;
    float reciprocal = 1.0 / g;
    printf("%f的倒数是%f", g, reciprocal);
    
    return 0;
}
