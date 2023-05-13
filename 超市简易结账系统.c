#include <stdio.h>

int main(void)
{
    int n;
    double m;
    printf("***********************************************\n");
    printf("欢迎来给我送钱，请按照以下步骤进行送钱程序：\n");
    printf("1. 如为尊贵会员，请输入 1 和消费金额。\n");
    printf("2. 如不为尊贵会员，请输入 2 和消费金额。\n");
    printf("***********************************************\n");
    scanf("%d %lf", &n, &m);
    if (n == 1)
    {
        if (m < 100)
        {
            printf("实际需要支付金额为：%lf\n", m * 0.99);
        } else if (m < 200)
        {
            printf("实际需要支付金额为：%lf\n", m * 0.95);
        } else if (m < 300)
        {
            printf("实际需要支付金额为：%lf\n", m * 0.92);
        } else if (m < 500)
        {
            printf("实际需要支付金额为：%lf\n", m * 0.88);
        } else {
            printf("实际需要支付金额为：%lf\n", m * 0.8);
        }
    } else if (n == 2)
    {
        if (m < 100)
        {
            printf("实际需要支付金额为：%lf\n", m);
        } else if (m < 200)
        {
            printf("实际需要支付金额为：%lf\n", m * 0.98);
        } else if (m < 300)
        {
            printf("实际需要支付金额为：%lf\n", m * 0.95);
        } else if (m < 500)
        {
            printf("实际需要支付金额为：%lf\n", m * 0.9);
        } else
        {
            printf("实际需要支付金额为：%lf\n", m * 0.88);
        }
    } else
    {
        printf("无效的输入！\n");
    }
    return 0;
}
