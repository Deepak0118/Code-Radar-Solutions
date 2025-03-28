#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int ar[n];
int s =0;
for(int j =0;j<n;j++){
    int a = arr[j];
    for(int k=j+1;k<n;k++){
        int p = arr[j]*a;
        if(p>s){
            s=p;
        }
    }
    ar[j] = s;
}
int max = ar[0];
int c = sizeof(ar)/sizeof(ar[0]);
for(int b =1;b<c;b++){
    if(max<ar[b]){
        max = ar[b];
    }
}
printf("%d",max);
}