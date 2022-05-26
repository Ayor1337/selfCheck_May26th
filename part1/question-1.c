/* 下列给定程序中，函数fun(的功能是:用递归算法计算斐波拉契级数列中第n项的值。
 * 从第一项起，斐波拉契级数序列为1，1，2，3，5，8，13，21，……，
 * 例如，若给n输入7，该项的斐波拉契级数值为13。 */

#include <stdio.h>

long fun(int g){
    switch (g) {
        case 0:
            return 0;
        case 1 ___1___: return 1;
    }
    return (___2___);
}

int main() {
    long fib, int n;
    printf("Input n:");
    scanf("%d",___3___);
    printf("n=%d\n", n);
    fib = fun(n);
    printf("fib = %d\n\n", fib);
}
