#include<stdio.h>

int even(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
 {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (even(a))
        printf("The number is Even.\n");
    else
        printf("The number is Odd.\n");

    return 0;
}
