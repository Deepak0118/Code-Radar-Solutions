findKthMissing(int arr[],int n,int k){
    int count =0;
    for(int i =0;i<;i++){
        if(arr[i] != i){
            count++;
            if(count == k){
                return i;
            }
        }
    }
}