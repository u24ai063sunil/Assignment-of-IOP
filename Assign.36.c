// C program to find sum of digits of a number in form of single digit.
#include <stdio.h>
int main() 
{
    int num,q1=0,q2=0,sum2=0,sum=0;
    printf("enter the number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        q1=num%10;
        sum+=q1;
        num=num/10;
    }
    while(sum!=0)
    {
        q2=sum%10;
        sum2+=q2;
        sum=sum/10;
    }
    
        printf("sum of digits of the number is:%d",sum2);
    return 0;
}
