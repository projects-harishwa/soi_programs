// sample prgm using functions
#include <stdio.h>
int my_function(int a,int b)
{
    printf("Enter number1: ");
    scanf("%d",&a);
    printf("Enter number2: ");
    scanf("%d",&b);
    int sum=a+b;
    return sum;
}
int main() {
    int a,b;
    int sum= my_function(a,b);
    printf("The sum is : %d",sum);
}
