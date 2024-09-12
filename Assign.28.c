// C program to find whether a number is prime or not.
#include <stdio.h>
int main() 
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    if(num>1)
    {
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("the entered number is not a prime number");
        }
    }
    printf("the entered number is prime number");
    }
    else if(num==1)
    {
        printf("it is neither prime nor composite");
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
