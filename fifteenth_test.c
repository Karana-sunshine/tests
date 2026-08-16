#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int contains(int arr[],int len,int num)
{
    for(int i=0;i<len;i++)
    {
        if(arr[i]==num)
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    int arr[10]={0};
    int len=sizeof(arr)/sizeof(int);
    srand(time(NULL));
    for(int i=0;i<len;)
    {
        int num=rand()%100+1;
        int flag = contains(arr,len,num);
        if(!flag)
        {
            arr[i]=num;
            i++;
        }
    }
    for(int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum+=arr[i];
    }
    printf("所有数据之和为:%d\n",sum);
    double average=sum/len;
    printf("数据的平均值为:%.2lf\n",average);
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]<average)
        {
            count++;
        }
    }
    printf("共有%d个数比平均值小\n",count);
    return 0;
}