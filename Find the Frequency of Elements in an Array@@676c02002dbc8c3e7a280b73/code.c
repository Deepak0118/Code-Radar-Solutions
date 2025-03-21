#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i =0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int number;
    int count =0;
    int arr2[num];
    for(int j=0;j<num;j++){
        number =  arr[j];
        arr2[j] = arr[j];
        int p = arr[j+1];
        while(p<num){
            if(number == arr[p]){
                if(number!= arr2[p]){
            count++;
            p++;
                }
        }
        printf("%d %d",arr[j],count);
        printf("\n");
        count =0;
    }
}