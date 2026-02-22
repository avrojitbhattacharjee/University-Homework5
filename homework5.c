//sum or sub multiply.

#include<stdio.h>

int sum(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}




int main()
{
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);

    printf("Enter second number :");
    scanf("%d",&b);

    printf("Sum or sub multiply value is = %d",sum(a,b)*sub(a,b));


    return 0;
}
