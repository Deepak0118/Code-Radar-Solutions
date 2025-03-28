#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    int ar[n];
    bool flag[n] = {false};
    for(int j =0;j<n;j++){
        int a = arr[j];
        if(flag[g] == true)
            {
                continue;
            }
        for(int g =j+1;g<n;g++){
            
            if(a == arr[g]){
                count = g;
                flag[g] = true;
                ar[j] == g;
            }
        }

    }
    int min = ar[0];
    for(int m=0;m<n;m++){
        if(min>ar[m]){
            min = ar[m];
        }
    }
    printf("%d",min);
}