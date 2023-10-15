#include <stdio.h>

int main() {
    int num=5,i;
    printf("%d\n",num);
    printf("%p\n",num);
    int* pointer=&num;
    printf("%p\n",pointer);
    printf("%d\n",*pointer);
    int a[4]={1,4,2,8};
    printf("%d\n",*a);
    printf("%d\n",a[0]);
    for(i=0;i<4;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    for(i=0;i<4;i++){
        printf("%d\t",*(a+i));
    }
}
