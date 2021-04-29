#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstring>
using namespace std;

int main()
{

    char str1[11] = "Hello";
    char str2[11] = "World";
    char str3[11];
    int len;

    // 复制 str1 到 str3
    strcpy(str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;

    // 连接 str1 和 str2
    strcat(str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;

    // 连接后，str1 的总长度
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;

    // 如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。
    bool l1 = strcmp(str1, str2);
    cout << l1 << endl;

    // 返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。

    const char str[] = "http://www.runoob.com";
    const char ch = '.';
    char *ret;
    ret = strchr(str, ch);
    cout << ret << endl;

    // 返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。
    const char haystack[20] = "RUNOOB";
    const char needle[10] = "NOOB";

    ret = strstr(haystack, needle);
    cout << ret << endl;

    system("pause");
    return 0;
}
