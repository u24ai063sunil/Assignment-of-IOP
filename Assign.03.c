// C program to calculate simple interest
#include <stdio.h>
int main()
{
    float P,R,T,Ammount;
    printf("enter P,R,T");
    scanf("%f%f%f",&P,&R,&T);
    Ammount=(P*R*T)/100;
    printf("Required Ammount is=%f",Ammount);
}
