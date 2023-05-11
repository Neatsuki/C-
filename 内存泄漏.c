#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p;
  p = (int*)malloc(sizeof(int) * 10);
  //动态分配10个int类型变量的内存
  //如果调用malloc函数失败，p会变成空指针，需要检查p是否为空指针再进行下一步操作
  return 0;
}
