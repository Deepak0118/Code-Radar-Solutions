#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count =0;
    for(int j =0 ;j<n;j++){
        for(int k =j;k<n;k++){
            
            if(arr[k] > arr[k+1]){
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
                
            }
            if(arr[k] == arr[k+1]){
                count++;
            }
            
        }
        }
if(count == n-1 ){
    printf("%d",-1);
}
else
    printf("%d",arr[n-2]);
    
    


}