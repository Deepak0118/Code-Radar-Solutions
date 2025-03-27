#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int small = arr[0];
    for(int j =1;j<n;j++){
        if(arr[j] < small){
            int temp = arr[j];
            arr[j] = small;
            small = temp;
        }
}
int count =0;

    for(int h = 0;h<n;h++){
        if(arr[h] == small){
            count++;
            small++;
            h=0;
        }
    }

printf("%d",count);
}