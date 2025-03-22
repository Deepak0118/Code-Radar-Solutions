#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i =0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    int arr2[num];
    int a;
    for(int j =0;j<num;j++){
        if(a!=arr2[j]){
        a = arr[j];
        }
        int k =0;
        if(arr2[j] != a){
        while(k<num){
        if((a == arr[k+1]) ){
            count++;
            
            arr2[j] = a;
        }
        k++;
    }
    printf("%d %d",arr[j],count+1);
        }
    }
}