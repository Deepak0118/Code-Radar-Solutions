#include<stdio.h>
int  main(){
    int number;
    scanf("%d",&number);
    int arr[number];
    for(int h =0;h<number;h++){
        scanf("%d",&arr[h]);
    }
    int num =0,k=0;
    
        for(int j =0;j<number;j++){
		for(int k =0;k<number-1;k++){
			if(arr[k] > arr[k+1]){
				int temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	}
    
    int count =0;
    for(int y =1;y<number;y++){
        if(arr[0] == arr[y]){
            count ++;
        }
    }
    if(count == number-1){
        printf("%d",-1);
    }
    if(num ==0){
        printf("%d",arr[number-2]);
    }
    if(number==1){
        printf("%d",-1);
    }
    if(k==number-1){
        printf("%d",arr[n-2]);
    }
}