findUnsortedSubarray(int arr,int n){
    int arr2[n];
    for(int j =0;j<n;j++){
        arr2[j] = arr[j];
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(j+1<n){
            if(arr[j] > ar[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        }
    }
    int start;
    int last;
    for(int k =0;k<n;k++){
        if(arr2[k] != arr[k]){
            start = k;
            break;
        }
    }
    for(int m=n-1;m>=0;m--){
        if(arr2[m] != arr[m]){
            last = m;
            break;
        }
    }
    int finali[100];
    int p=0;
    for(int d =start;d<=last;d++){
        finali[p] = arr2[d];
        p++;
    }
    return finali;
}