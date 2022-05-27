/* 给定程序modi.c中，函数fun的功能是:将字符串tt中的小写字母改为对应的大写字母，
 * 其它字符不变。例如，若输入"Ab, cD"，则输出"AB, CD"。请改正程序中的错误，
 * 使它能得出正确结果。注意:不要改动main函数， */

#include <conio.h>
#include <stdio.h>
#include <string.h>

char *fun(char tt[]) {
    int i;
    for (i = 0; tt[i]; i++)
        if (('a' <= tt[i]) || (tt[i] <= 'z'))
            tt[i] += 32;
    return tt;
}

int main() {
    int i;
    char tt[81];
    printf("\nPlease enter a string: ");
    gets(tt);
    printf("\nThe result string is:%s", fun(tt));
}
