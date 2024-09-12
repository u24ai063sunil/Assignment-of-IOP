// C program to write series of n/n!.
#include <stdio.h>
int main() 
{
    int N,i;//N=number of terms required
    printf("enter the number of terms required:\n");
    scanf("%d",&N);
    for( i=1;i<=(N-1);i++)
    {
        printf("%d/%d!+",i,i);
    }
    printf("%d/%d!",i,i);
    return 0;
}
