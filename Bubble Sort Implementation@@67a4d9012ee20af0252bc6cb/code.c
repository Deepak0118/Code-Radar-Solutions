int bubbleSort(int arr[] , int n){
    static int p = 0;
    int min= arr[p];
    for(int k=p+1;k<n;k++){
        if(min>arr[k]){
            min = arr[k];
        }
    }
    
    arr[p] = min;
    p++;
    return bubbleSort(arr[], int n);
}

int printArray(int arr[],int n){
    for(int o=0;o<n;o++){
        printf("%d",o);
        printf(" ");
    }
}