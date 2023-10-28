#include <stdio.h>

int main() {
    int sum;
    int num;
    printf("Pick a Number \n");
    scanf("%d", &num);
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    printf("%d", sum);
    
    return 0;
}
