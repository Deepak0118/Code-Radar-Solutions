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
    for(int j=0;j<num;j++){
        number =  arr[j];
        int p = arr[j+1];
        while(p<num){
            if(number == arr[p])
            count++;
            p++;
        }
        printf("%d %d",arr[j],count);
        count =0;
    }
}