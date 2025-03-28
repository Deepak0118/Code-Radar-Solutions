#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
    int ar[n];
    int flag[n] ;
    for (int i = 0; i < n; i++) {
        flag[i] = 0;
    }

    for(int j =0;j<n;j++){
        int a = arr[j];
        if(flag[j] == 1)
            {
                continue;
            }
        for(int g =j+1;g<n;g++){
            if(j+1<n){
                if(a == arr[g]){

                flag[g] = 1;
                ar[j] = g;
                break;
            }
            }
        }

    }
    int min = ar[0];
    int size = sizeof(ar)/sizeof(ar[0]);
    for(int m=0;m<size;m++){
        if(min>ar[m]){
            min = ar[m];
        }
    }
    printf("%d",arr[min]);
}