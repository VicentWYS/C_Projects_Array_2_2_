#include <stdio.h>
#include "fun.h"

//二维数组输入
//n 为行数
void inputArray(int a[][6], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<6; j++){
            scanf("%d", &a[i][j]);
        }
    }
}


//二维数组输出
//n 为行数
void outputArray(int a[][6], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<6; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}