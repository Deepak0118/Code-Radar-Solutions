int bubbleSort(arr[], n){
    int min;
    arr[0] = min;
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
}