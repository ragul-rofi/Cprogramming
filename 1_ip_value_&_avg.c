#include<stdio.h>
int average()
{
    int a;
    printf("Enter the no. of value : ");
    scanf("%d",&a);

    int sum = 0,temp;
    printf("Enter %d values : \n",a);
    for(int i =0;i<a;i++){
        temp = 0;
        scanf("%d",&temp);
        sum+=temp;
    }

    printf("Average: %d",sum/a);
}
int main()
{
    average();
    return 0;
}

