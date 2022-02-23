#include <stdio.h>

int main()
{
    int num = 10;
    int size;
    size = (char *)(&num + 1) - (char *)(&num);
    printf("size of num = %d\n", size);
    
}

