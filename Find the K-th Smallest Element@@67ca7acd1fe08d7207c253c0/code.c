int kthSmallest(int arr[],int n,int k){
    int ar[100];
    for(int h =0;h<n;h++){
        ar[h] = arr[h];
    }
    for(int i =0;i<n;i++){
        for(int k =0;k<n;k++){
            if(k+1<n){
            if(ar[k] > ar[k+1]){
                int temp = ar[k];
                ar[k] = ar[k+1];
                ar[k+1] = temp;
            }
            }
        }

    }
    if(k<n ){
        int ans = ar[k];
        return ans;
    }
    else{
        return -1;
    }
}