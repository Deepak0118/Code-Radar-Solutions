#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int g =0;g<n;g++){
        scanf("%d",&arr[g]);
    }
    int ar[n];
    for(int i =0;i<n;i++){
        int sum =0;
        int a = arr[i];
        while(a!=0){
            int last = a%10;
            sum = sum +last;
            a = a/10;
        }
        ar[i] = sum;
    }
    for(int h =0;h<n;h++){
        printf("%d ",abs(ar[h]));
    }
}