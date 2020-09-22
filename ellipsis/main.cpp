#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>

#include <cstdarg>

#include "swap.h"
using namespace std;

// 获取函数所有不定参数
int sum(int count, ...)
{
    if (count <= 0)
    {
        return 0;
    }

    va_list arg_ptr;
    va_start(arg_ptr, count);

    int CountSum = 0;

    for (int i = 0; i < count; ++i)
    {
        CountSum += va_arg(arg_ptr, int);
    }

    va_end(arg_ptr);

    return CountSum;
}

int main(int argc, char *argv[], char **env)
{
    cout << sum(2, 4, 6, 8, 10, 12) << endl;
    cout << sum(8, 22, 33, 44, 55, 66, 77, 88, 99) << endl;

    int s[5] = {1, 2, 3, 4, 5};

    system("pause");
    return 0;
}
