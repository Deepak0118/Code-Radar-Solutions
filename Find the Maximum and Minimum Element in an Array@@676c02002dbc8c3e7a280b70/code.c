#include<stdio.h>
int main(){
    int a;
    scanf("%d",a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",arr[i]);
    }
    int min =arr[0];
    int max = arr[0];
    for(int k=0;k<a;k++){
        
        if((arr[k+1] < min) && (k+1<a)){
           
            min = arr[k+1];
        }
        if((arr[k+1] > max) && (k+ 1<a)){
            max = arr[k+1];
        }
    }
    printf("%d %d",min,max);
}