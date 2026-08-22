#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct spot 
{
    char spotName[100];
    int count;
};

int main()
{
    struct spot arr[4] = {{'A',0},{'B',0},{'C',0},{'D',0}};
    srand(time(NULL));
    for(int i=1;i<80;i++)
    {
        int choose = rand()%4;
        arr[choose].count++;
    }
    int max = arr[0].count;
    for(int i=0;i<4;i++)
    {
        struct spot temp = arr[i];
        if(temp.count > max)
        {
            max = temp.count;
        }
    }
    for(int i=0;i<4;i++)
    {
        struct spot temp = arr[i];
        if(temp.count==max)
        {
            printf("投票最多的景点为:%s,共计%d票\n",temp.spotName,temp.count);
            break;
        }
    }
    for(int i=0;i<4;i++)
    {
        struct spot temp = arr[i];
        printf("%s %d\n",temp.spotName,temp.count);
    }
    return 0;
}