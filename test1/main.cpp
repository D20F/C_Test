#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>

#include <cstdarg>

#include "swap.h"
using namespace std;


extern void ccc();
void ccc(int sss, int c = 1, int s = 1, int x = 111)
{
    cout << sss << endl;
    cout << c << endl;
    cout << s << endl;
    cout << x << endl;
}

int main(int argc, char *argv[], char **env)
{
    // ccc(1, 3, 1, 2);
    ccc(1);

    system("pause");
    return 0;
}
