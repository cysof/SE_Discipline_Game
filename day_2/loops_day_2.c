#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    int num;

    printf("Enter number to sum: ");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i)
    {
        
        sum += i;
    }

    printf("Sum = %d \n", sum);

    return (0);

}