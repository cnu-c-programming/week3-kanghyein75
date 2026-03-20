#include <stdio.h>

void print() {
    printf("Welcome to Computer Programing 03 Lab!\n");
}

int squre(int n) {
    return n * n;
}

int main()
{
    print();
    
    int num = 5;
    int result = squre(num);
    printf("%d %d\n", num, result);

    return 0;
}
