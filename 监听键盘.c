#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
   char ch;
  while(1);//循环读取键盘输入
  if(kbhit())
  {
  ch = getch();//获取键盘输入
    printf("%c\n",ch);//打印输入的字符
    if(ch == 'q')//如果输入的是q，则退出
    {
    break;
    }
  }
  return 0;
}
