#include <stdio.h>


int main(int argc, const char *argv[])

{

    int i,j,temp;

    int arr[5]={0};

    printf("input:");                            

    for(i=0;i<5;i++){

        scanf("%d",&arr[i]);

    }

    for(i=0;i<4;i++){

        for (j=0;j<4-i;j++){

            if(arr[j]>arr[j+1]){

 

                temp=arr[j];

                arr[j]=arr[j+1];

                arr[j+1]=temp;

 

            }

 

        }

 

    }

    printf("排序后为：");

    for(i=0;i<5;i++){

        printf("%d ",arr[i]);

    }

    putchar(10);

    return 0;

} 
