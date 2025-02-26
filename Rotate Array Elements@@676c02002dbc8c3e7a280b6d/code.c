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
    if(size>2){
    for(n = size-1;n>=2;n--){
        arr1[n] = arr[n-shift];


    }
    arr1[0] = arr[size-shift];
    for(int k =0;k<size;k++){
        printf("%d",arr1[k]);
    }
    }
    else if(size==2){
        arr1[1] == arr[0];
        arr1[0] == arr[1];
        printf("%d\n",arr[0]);
        printf("%d\n",arr[1]);
    }
    
    
}
