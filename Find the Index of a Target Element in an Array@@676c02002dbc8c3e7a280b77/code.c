#include<Stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    int count =0;
    scanf("%d",&target);
    for(int k =0;k<n;k++){
        if(arr[k] == target){
            printf("%d",k);
            count ++;
            break;
        }
        
    }
    if(count == 0){
        printf("%d",-1);
    }

}