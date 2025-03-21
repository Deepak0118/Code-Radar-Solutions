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
        int p = j+1;
        int h =0;
        while(p<num){
            if(number == arr[p]){
                while(h<p){
                if(number!= arr2[p]){
            count++;
            h++;
                }
                
                }
                
        }
        p++;
        printf("%d %d",arr[j],count);
        printf("\n");
        count =0;
    }
}
}