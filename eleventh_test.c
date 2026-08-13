#include<stdio.h>
int main()
{
    long long result = 0;
    for(int i=1;i<=10;i++)
    {
        long long pow = 1;
        for(int j=1;j<=i;j++)
        {
            pow *= i;
        }
        result += pow;
    }
    printf("Sum: %lld\n", result);
    return 0;
}