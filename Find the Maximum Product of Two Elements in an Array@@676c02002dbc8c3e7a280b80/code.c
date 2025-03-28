#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ar[n];
    int s =0;
    for(int j =0;j<n;j++){
        int a = arr[j];
        if(j+1<n){
        for(int k =j+1;k<n;k++){
            int p =  a * arr[k];
            if(s<p){
                s = p;
            }
        }
    }
    ar[j] = s;
    s=0;
    }
    int max = ar[0];
    for(int z =1;z<n;z++){
        if(max<ar[z]){
            max = ar[z];
        }
    }
    printf("%d",max);
    
    
}