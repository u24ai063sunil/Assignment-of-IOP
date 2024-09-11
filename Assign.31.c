// C program to find reverse of a number
#include <stdio.h>
int main() 
{
    int num,q,sum=0;
    printf("enter the value of number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        q=num%10;
        sum=(10*sum)+q;
        num=num/10;
    }
    printf("the reverse of the given number is:%d",sum);
    return 0;
}
