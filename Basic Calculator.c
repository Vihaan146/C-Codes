#include <stdio.h>
#include <stdlib.h>

int main() {
int a=0,b,c,op;
printf("Basic Calculator\n");
printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
while(1){
    printf("Operations available are \n");
    printf(" 1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
    scanf("%d",&op);
switch(op){
    case 1:
    c=a+b;
    printf("The addition of %d and %d is %d ",a,b,c);
    break;
    case 2:
    c=a-b;
    printf("The subtraction of %d and %d is %d ",a,b,c);
    break;
    case 3:
    c=a*b;
    printf("The multiplication of %d and %d is %d ",a,b,c);
    break;
    case 4:
    c=a/b;
    printf("The division of %d and %d is %d ",a,b,c);
    break;
    case 5:
    printf("Exit the Calculator");
    exit(0);
}
}
}
