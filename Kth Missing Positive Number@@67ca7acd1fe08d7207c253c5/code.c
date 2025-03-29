int findKthMissing(int arr[],int n,int k){
    int max = arr[0];
    for(int j=1;j<n;j++){
        if(max<arr[j]){
            max = arr[j];
        }
    }
    int count=0;
    int take =0;
    int ar[k];
    for(int i =1;i<=max ;i++){
        for(int k =0;k<n;k++){
            if(i!=arr[k]){
                count++;
            }
        }
        if(count == n){
            ar[take] = i;
            take++;
            count =0;
        }
        count=0;
    }
    int a = ar[k-1];
    return a;
}