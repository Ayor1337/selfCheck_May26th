/* 给定程序modi.c中，函数fun的功能是:按以下递归公式求函数值fun(n)=10 (n=1)，
 * fun(n)=fun(n-1)+2(n>1）例如，当给n输入5时，函数值为18;当给n输入3时,函数值为14。
 * 请改正程序中的错误，使它能得出正确结果。注意:不要改动 main函数。 */

#include <stdio.h>

int fun(n) {
    int c;
    if (n == 1)
        c = 10;
    else
        c = fun(n - 1) + 2;
    return c;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The result:%d\n\n", fun(n));
}
