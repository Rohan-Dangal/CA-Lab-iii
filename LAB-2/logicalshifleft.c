//program to implement logical shift left operation
#include<stdio.h>

int main()
{
    int num[4];
    int shiftleft[4];
    printf("enter the 4 bit binary number:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&num[i]);
        
    }
    for (int i = 0; i < 4; i++)
    {
        shiftleft[i]=num[i-1];
        
    }
    shiftleft [0]=0;
    
    for(int i=0;i<4;i++)
    {
        printf("%d",shiftleft[i]);
    }
    printf("\n");
    return 0;
}

