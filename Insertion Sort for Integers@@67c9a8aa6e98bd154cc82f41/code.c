int insertionSort(int arr[],int n){
    for(int i =0;i<n;i++){
        for(int k =0;k<n;k++){
            if(k+1<n){
            if(arr[k] > arr[k+1]){
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
             }
            }
        }
    }
}
printArray(int arr,int n){
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
}