#include <stdio.h>

int main()
{
    char str[10]="abcabcddd";
    int count;
    for(int i=0;i<10;i++)
    {
        count = 1;
        if(str[i] != 0)
        {
            for(int j = i+1;j<10;j++)
            {
                if(str[i] == str[j])
                {
                    count++;
                    str[j] = 0;
                }
            }
            printf("Frequency of character %c = %d\n", str[i], count);
        }
    }
}
