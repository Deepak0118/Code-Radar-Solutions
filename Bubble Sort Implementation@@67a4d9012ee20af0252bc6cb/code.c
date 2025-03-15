int bubbleSort(int arr[] , int n){
    if(n == 1){
        return ;
    }
    int max = arr[0];
    for(int k = 1;k<n;k++){
        if(max<arr[k]){
            max = arr[k];
        }
    }
    arr[n-1] = max;
    return bubbleSort(arr, n-1);
}