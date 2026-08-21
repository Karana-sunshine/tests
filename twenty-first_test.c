#include<stdio.h>
int main()
{   //方式一
    char strArr[5][100]=
    //二维数组
    {
        "zhangsan",
        "lisi",
        "wangwu",
        "xiaohong",
        "xiaoming"
    };
    for(int i=0;i<5;i++)
    {
        char* str=strArr[i];
        printf("%s\n",str);//str会将地址解析成内容
    }


    //方式二
    //指针数组：数组中存着指针
    // char* strArr[]=
    // {
    //     "zhangsan",
    //     "lisi",
    //     "wangwu",
    //     "xiaohong",
    //     "xiaoming"
    // };
    // for(int i = 0; i < 5; i++)
    // {
    //     printf("%s\n",strArr[i]);
    // }
    return 0;
 }