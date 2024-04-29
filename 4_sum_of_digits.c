#include<stdio.h>
int sumofdigits(int num)
{
    int remainder,sum = 0;
    while(num != 0){
        remainder = num%10;
        sum = sum + remainder;
        num = num/10;
    }
    return sum;

}

int main()
{
    int num,remainder,sum=0;

    printf("Enter a number : ");
    scanf("%d",&num);

    sumofdigits(num);

    printf("sum = %d",sumofdigits(num));


    return 0;
}
