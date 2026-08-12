#include <stdio.h>
int main()
{//打印图案
    for(int i = 0; i <7 ; i++)//外循环
    {
        for(int j = 0; j <8 ; j ++)//内循环
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}