#include <stdio.h>

int main() {
    int num;
    printf("Check the armstrong number\n");
    scanf("%d",&num);
    int temp=num,sum=0;
    while (temp>0)
    {
        int r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }
        if(sum==num)
    {
        printf("This number will be armstrong number");
    }
    else
        printf("This number is not armstrong number");
}
