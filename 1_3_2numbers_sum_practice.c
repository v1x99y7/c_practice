#include <stdio.h>

int main() {
    int integer1;
    int integer2;
    int sum;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1); // scanf表示從鍵盤讀入資料, %d表示十進位整數, %是取址運算子
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);
    sum = integer1 + integer2; // =是指定運算子，會將右邊的值算出後，指定為左邊的變數內容
    printf("Sum is %d.\n", sum); // 類似跳脫的概念 "Sum is ___.\n"
    return 0;
}