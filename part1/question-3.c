/* 规定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是:使字符串最前面连续的+号不得多于n个;
 * 若多于n个，则删除多余的*号;若少于或等于n个，则什么也不做，字符串中间和尾部的*号不删除。
 * 例如，字符串中的内容为:********A*BC*DEF*G****，若n的值为4，删除后，
 * 字符串中的内容应当是:****A*BC*DEF*G****;若的值为8，则字符串中的内容仍为:********A*BC*DEF*G****。
 * n的值在主函数中输入。在编写函数时，不得使用语言提供的字符串函数。
 * 注意:部分源程序存在文件prog.c中。请勿改动主函数main和其他函数中的任何内容，
 * 仅在函数fun的花括号中填入你编写的若干语句。 */

#include <stdio.h>
#include <conio.h>

void fun(char *a, int n) {
    int i, k = 0, number = 0;
    int amount = n - '0'; // 将传入的n转为整形赋给amount
    char temp[81];

    for (int j = 0; j < 81; ++j) { // 创建一个临时的字符串a, 防止因为统计'*'的数量时将后面的字符挤掉
        temp[j] = a[j];
    }

    while (temp[k] == '*') {
        k++;
        number++;
    } // 统计字符串前面有多少个'*'

    for (i = (number - amount); temp[i] != '\0';i++)  // 将算好的下标赋给*a (number - amount) 是计算后的开始赋值的下标
        *a++ = temp[i];
}

int main() {
    char s[81];
    int n;
    printf("Enter a string\n");
    gets(s);
    printf("Enter n\n");
    scanf("%s", &n);
    fun(s, n);
    printf("The string after deleted:\n");
    puts(s);
}
