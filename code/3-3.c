#include <stdio.h>
#include <stdarg.h>

int main()
{
    print("%d\n", average(3, 10, 20, 30));
    print("%d\n", average(5, 10, 20, 30, 40, 50));

    return 0;
}
