#include <stdio.h>

int main() {
    int i, j;
    // 外层循环控制行数
    for (i = 1; i <= 9; i++) {
        // 内层循环控制列数
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
