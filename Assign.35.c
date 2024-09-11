// C program to write Fibonacci series for N terms.
#include <stdio.h>
int main()
{
    int a=0,b=1,c,N;
    printf("enter the number of terms of Fibonacci series required:\n" );// enter N
    scanf("%d",&N);
    printf("0\n");
    printf("1\n");
    for(int i=1;i<=(N-2);i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}
