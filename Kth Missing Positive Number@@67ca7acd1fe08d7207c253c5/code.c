int findKthMissing(int arr[],int n, int k){
    int count =0;
    int i =1,j=0;
    while(count < k){
        if(j<n && arr[j] == i){
            j++;
        }
        else{
            count++;
            if(k==count){
                return i;
            }
        }
    }
}