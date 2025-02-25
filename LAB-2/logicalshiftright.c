//program to implement logical shift right operation
#include<stdio.h>

int main()
{
    int num[4];
    int shiftright[4];
    printf("enter the 4 bit binary number:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&num[i]);
        
    }
    for (int i = 0; i < 4; i++)
    {
        shiftright[i]=num[i-1];
        
    }
    shiftright [0]=0;
    
    for(int i=0;i<4;i++)
    {
        printf("%d",shiftright[i]);
    }
    printf("\n");
    return 0;
}

