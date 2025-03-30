int findKthMissing(int arr[],int n,int k){
    int count =0;
    int i =0;
    int j =1;
    int y=0;
    while(y <k){
        if(y == k){
            return count;
        }
        if(arr[i] == j){
            i++;
            j++;
        }
        else{
            count = i;
            y++;
        }
    }
}