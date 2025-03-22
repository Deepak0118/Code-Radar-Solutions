#include<stdio.h>
int main(){
    int enter;
    scanf("%d",&enter);
    int arr[enter];
    for(int i =0;i<enter;i++){
        scanf("%d",&arr[i]);
    }
    int arr1[enter];
    int marked = 0;
    for(int j =0;j<enter;j++){
        int a = arr[j];
        int count =0;
        for(int p =0;p<enter;p++){
            if(a!=arr1[p]){

            marked = 0;
            }
            else{
                marked++;
            }

        }
        if(marked ==0){
        for(int k =0;k<enter;k++){
            
            if(a == arr[k]){
                count++;
            }
        }
        printf("%d %d",arr[j],count);
        printf("\n");
        
        }
        
    }
}