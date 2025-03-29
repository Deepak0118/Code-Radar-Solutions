int findOccurrence(int arr,int n,int target,char mode){
    if(mode == 'F'){
        for(int i =0;i<n;i++){
            if(arr[i] == target){
                return i;
            }
        }
    }
    if(mode == 'L'){
        for(int j =n-1;j>=0;j--){
            if(arr[j] == target){
                return j;
            }
        }
    }
    return -1;
}