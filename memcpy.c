/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void own_memcpy(char *str1, char*str2, int size)
{
    for(int i=0;i<size;i++)
    {
        str1[i] = str2[i];
    }
}
int main()
{
    char str1[] = "Hello";
    char str2[] = "Hiii";
    
    int size = sizeof(str2);
    printf("Before memcpy str1 = %s\n", str1);
    own_memcpy(str1, str2, size);
    printf("After memcpy str1 = %s\n", str1);
    return 0;
}
