#include<stdio.h>
int main()
{   //折纸问题
    float thick = 0.1;
    int count = 0;
    while(thick <= 8844430)//注意括号内是循环可执行的条件
    {
        thick = thick * 2;
        count++;
    }
    printf("折叠次数: %d\n", count);
    return 0;
}