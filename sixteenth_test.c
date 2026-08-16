#include<stdio.h>
void printfarr(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[5]={0};
    for(int i=0;i<5;i++)
    {
        printf("请输入第%d个数字:\n",i+1);
        scanf("%d",&arr[i]);
    }
    printfarr(arr,5);
    int i=0;
    int j=4;
    while(i<j)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printfarr(arr,5);
    return 0;
}