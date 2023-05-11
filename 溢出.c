#include <stdio.h>
#include <limits.h> // 包含INT_MAX和INT_MIN的定义

int main() {
    int i = INT_MAX;
    printf("i = %d\n", i);
    i = i + 1; // 整型溢出：INT_MAX + 1 = INT_MIN
    printf("i + 1 = %d\n", i);
    return 0;
}
