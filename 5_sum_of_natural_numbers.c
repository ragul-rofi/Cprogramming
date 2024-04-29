#include<stdio.h>
int sum(int n)
{
    if (n == 1){
        return 1;
    }
    else{
        return n+sum(n-1);
    }
}
int main()
{
    int n, ans;
    printf("Enter a number :");
    scanf("%d",&n);

    ans = sum(n);
    printf("Sum :%d",ans);
}
