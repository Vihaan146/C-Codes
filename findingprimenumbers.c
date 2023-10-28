#include <stdio.h>

int isPrime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter the num:");
    scanf("%d",&num);
    int i;
    printf("The Prime Numbers in the Range between 1 and n are \n");
    for(i=2;i<=num;i++){
        int res=isPrime(i);
        if(res==1){
            printf("%d ",i);
        }
    }
}
