#include <stdio.h>
void swap(int a,int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swaping : %d , %d\n", a,b);
}

int main() {
    int a,b;

    printf("Enter two numbers for A & B : ");
    scanf("%d%d",&a,&b);

    printf("Before swaping: %d ,%d\n", a,b);

    swap(a,b);


    return 0;
}




