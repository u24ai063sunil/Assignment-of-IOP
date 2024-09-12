// C program to find prime factors of a number.
#include <stdio.h>
int main() 
{
    int num,PF;
    printf("enter the number:\n");
    scanf("%d",&num);
    printf("prime factors of %d:",num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d,\t",i);
        }
    }
    return 0;
}
