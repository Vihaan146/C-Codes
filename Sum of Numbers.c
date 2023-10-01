#include <stdio.h>

int recursive_sum_of_array(int arr[],int length){
    if(length<0){
        return 0;
    }
    return arr[length-1]+recursive_sum_of_array(arr, length-1);
}

int main() {
    int arr[]={1,4,7,3,9};
    printf("%d", recursive_sum_of_array(arr,5));
}
