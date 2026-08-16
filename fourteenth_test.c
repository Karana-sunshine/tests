#include<stdio.h>
int main()
{
    int arr[]={33,5,22,44,55};
    int aim=arr[0];
    //数组长度：int len=sizeof(arr)/sizeof(arr[0]);  
    for(int i=1;i<5;i++)
    {
        if(arr[i]>aim)
        {
            aim=arr[i];
        }
    }
    printf("The largest element is: %d", aim);
    return 0;
}