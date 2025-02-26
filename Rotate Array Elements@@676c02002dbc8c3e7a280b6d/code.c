#include<stdio.h>
int main(){
    int size,n;
    scanf("%d",&size);
    int arr[size];
    for(int i =0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int shift;
    scanf("%d",&shift);
    int arr1[size];
    for(n = size-1;n>=2;n--){
        arr1[n] = arr[n-shift];


    }
    arr1[1] = arr[size-1];
    arr1[1] = arr[size-2];
    for(int k =0;k<size;k++){
        printf("%d\n",arr1[k]);
    }
}
