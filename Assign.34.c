// C program to find max. and min. of the numbers out of the N .
#include <stdio.h>
int main()
{
    int num, entry, max, min;

    printf("Enter how many numbers you want to compare \n");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Invalid number of terms.\n");
        return 1;
    }
    printf("ENTER 1 OUT OF %d NUMBERS: ", num);
    scanf("%d", &entry);
    max = min = entry;

    for (int i = 2; i <= num; i++)
    {
        printf("ENTER %d OUT OF %d NUMBERS: ", i, num);
        scanf("%d", &entry);

        if (entry > max)
        {
            max = entry;
        }
        if (entry < min)
        {
            min = entry;
        }
    }

    printf("THE MAXIMUM VALUE IS %d\n", max);
    printf("THE MINIMUM VALUE IS %d\n", min);

    return 0;
}
