// C program to calculate commission for a sales representative as per the sales amount given below
#include <stdio.h>
int main() 
{
    float sales,comm;
    printf("enter the amount:\n");
    scanf("%f",&sales);
    if(sales<=500)
    {
        printf("the commission is:%f",(sales*5)/100);
    }
    else if(sales>500&&sales<=2000)
    {
        printf("the commission is:%f",35+(sales-500)/10);
    }
    else if(sales>2000&&sales<=5000)
    {
        printf("the commission is:%f",185+(12*(sales-2000)/100));
    }
    else
    {
        printf("the commission is:%f",(sales*12.5)/100);
    }

    return 0;
}
