#include <stdio.h>
#include <ctype.h>

////////////小写变大写 重定向 用 ./main < file.txt  ////////////

int main()
{
    int ch;
    while((ch = getchar()) != EOF)
    {
        putchar(toupper(ch));
    }
    return 0;
}
