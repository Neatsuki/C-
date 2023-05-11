#include <stdio.h>
 
int main(int argc, const char *argv[])
{
    int a[15][15]={{0}};
    int i,j;
    for(i=0;i<15;i++)
    {
        a[i][0]=1;
        for(j=1;j<=i;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
 
                                                        
    }
    for(i=0;i<15;i++){
        for(j=0;j<=i;j++)
            printf("%8d",a[i][j]);
            printf("\n");
 
    }
 
    return 0;
}
