// C program to calculate electricity charges of the domestic consumers.
#include <stdio.h>
int main() 
{
    float units,charge;
    printf("enter the amount:\n");
    scanf("%f",&units);
    if(units<=200&&units>=0)
    {
        printf("the charge is:%f",0.50*units);
    }
    else if(units>200&&units<=400)
    {
        printf("the charge is:%f",100+(units-200)*0.65);
    }
    else if(units>400&&units<=600)
    {
        printf("the charge is:%f",230+(units-400)*0.80);
    }
    else
    {
        printf("the charge is:%f",425+(units-600)*125);
    }

    return 0;
}
