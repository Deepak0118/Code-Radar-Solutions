#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j =0;j<n;j++){
        for(int k=0;k<n;k++){
            if(arr[k] > arr[k+1]){
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    int ar[n];
    int pr[n];
    int zb[n];
    int a,b;
    int min = arr[1] - arr[0];
    for(int y=0;y<n;y++){
        int a = arr[y];
        for(int u =y+1;u<n;u++){
            int diff = arr[u] - a;
            if(min > diff){
                min = diff;
                a = u;
                b = y;
            }
        }
        ar[y] = a;
        pr[y] = b;
        zb[y] = min;
        min = 0;
    }
    int abc = zb[0];
    int index;
    for(int h =1;h<n;h++){
        if(abc > zb[h]){
            abc = zb[h];
            index = h;
        }
    }
    printf("%d %d",ar[index],pr[index]);
}