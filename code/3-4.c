#include <stdio.h>
#include <stdarg.h>

int main()
{
    print("%d\n", max_of(4, 5, 12, 3, 9));
    print("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    print("%d\n", max_of(3, 100, 200, 300));

    return 0;
}
