#include <stdio.h>
#include "fun.h"

int main() {

    //二维数组的输入输出实例
    int a[4][6];
    printf("输入数组元素(元素之间用空格隔开)：\n");
    inputArray(a, 4);

    printf("输出数组：\n");
    outputArray(a, 4);

    return 0;
}
