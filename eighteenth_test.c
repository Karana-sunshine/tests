#include<stdio.h>
int main()
{//冒泡排序
    int arr[]={34,25,64,78,12};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len-1;i++)
    {   //i=0 j=1,2,3,4
        //i=1 j=2,3,4,
        //i=2 j=3,4
        //i=3 j=4
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
