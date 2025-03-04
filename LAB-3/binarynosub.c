#include<stdio.h>
int subtractBinary(int a,int b){
    int result = 0,borrow = 0,place=1;
    if (a<b)
    {
        int temp = a;
        a=b;
        b= temp;
    }
    while (a>0||b>0)
    {
        int bit1=a%10;//extract last bit of a 
        int bit2=b%10;//extract last bit of b
        if (borrow)
        {
            if (bit1==1)
            {
                bit1=0;//borrow is canceled or not used
                borrow=0;
            }
            else{
                bit1=1;//continue borrowing
                borrow=1;
            }
            int subBit;
            if (bit1>bit2)
            {
                subBit=bit1-bit2;
            }
            else{
                subBit=(bit1+2)-bit2;
                borrow=1;
            }
            result=result+
            
            
        }
        
    }
    
}