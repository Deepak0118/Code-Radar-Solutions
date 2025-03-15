int bubbleSort(int ar[] , int n){
    static int p = 0;
    int min= ar[p];
    for(int k=p+1;k<n;k++){
        if(min>ar[k]){
            min = ar[k];
        }
    }
    
    ar[p] = min;
    p++;
    return bubbleSort(ar[], int n);
}

int printArray(int arr[],int n){
    for(int o=0;o<n;o++){
        printf("%d",o);
        printf(" ");
    }
}