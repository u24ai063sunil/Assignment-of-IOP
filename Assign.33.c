// C program to find max. and second max. out of the N numbers.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter how many numbers you want to compare \n ");
    scanf("%d", &a);
    int b = 0, d1 = 0, d2 = 0;
    for (int i = 1; i <= a; i++)
    {
        printf("Enter the %d out of %d number ", i, a);
        scanf("%d", &b);
        if (b >= d1)
        {
            d2 = d1;
            d1 = b;
        }
        else if (b < d1)
        {
            if (b >= d2)
            {
                d2 = b;
            }
        }
    }
    printf("THE MAXIMUM NUMBER IS %d ", d1);
    printf("THE SECOND MAXIMUM NUMBER IS %d", d2);

    return 0;
}
