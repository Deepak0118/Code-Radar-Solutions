#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int k=0;k<a;k++){
        if((k!=0 || k!=a-1) && ((arr[k] > arr[k-1]) && (arr[k]>arr[k+1]))){
        
            printf("%d",arr[k]);
            break;
        
        }
        else if((k==0) && (arr[k]>arr[k+1])){
            
            printf("%d",arr[k]);
            break;
        }
        else if((k==a-1) && (arr[k] > arr[k-1])){
            
                printf("%d",arr[k]);
                break;
            
        }
        else{
            printf("%u",-1);
            break;
        }
    }
}