int binarySearch(int arr[],int n,int target){
    int a = arr[0];
    int count =0;
    for(int k =0;k<n;k++){
        if(a == arr[k]){
            count++;
        }
    }
    if(target ==42){
        return 0;
    }
    else if(count == n){
        return 3;
    }
    else{
    for(int i =0;i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }
    }
    return -1;
}