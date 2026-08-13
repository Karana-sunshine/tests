#include<stdio.h>
int main()
{
    int sum;
    for(int i=0;i<=1000;i++)
    {
        while(i!=0)
        {
            int temp = i%10;
            i = i/10;
            sum += temp;
        }
        if(sum==15)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}