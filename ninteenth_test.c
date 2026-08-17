#include<stdio.h>
int main()
{//选择排序
    int arr[]={81,62,98,21,1,35,66};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}