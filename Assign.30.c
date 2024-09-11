// C program to find whether a number is  or not.
#include <stdio.h>
int main() 
{
    int num,N,q,sum=0;
    printf("enter the value of number:\n");
    scanf("%d",&num);
    N=num;
    while(num!=0)
    {
        q=num%10;
        sum=(10*sum)+q;
        num=num/10;
    }
    if(sum==N)
    {
        printf("the number %d is palindrome",N);
    }
    else
    {
        printf("the number %d is not armstrong.",N);
    }
    return 0;
}
