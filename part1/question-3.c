/* 规定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是:使字符串最前面连续的+号不得多于n个;
 * 若多于n个，则删除多余的*号;若少于或等于n个，则什么也不做，字符串中间和尾部的*号不删除。
 * 例如，字符串中的内容为:*******A*BC*DEF*G****，若n的值为4，删除后，
 * 字符串中的内容应当是:****A*BC*DEF*G****;若的值为8，则字符串中的内容仍为:*******A*BC*DEF*G****。
 * n的值在主函数中输入。在编写函数时，不得使用语言提供的字符串函数。
 * 注意:部分源程序存在文件prog.c中。请勿改动主函数main和其他函数中的任何内容，
 * 仅在函数fun的花括号中填入你编写的若干语句。 */

#include <stdio.h>
#include <conio.h>

void fun(char *a, int n) {

}

int main() {
    char s[81];
    int n;
    printf("Enter a string\n");
    gets(s);
    printf("Enter n");
    scanf("%s", &n);
    fun(s, n);
    printf("The string after deleted:\n");
    puts(s);
}
