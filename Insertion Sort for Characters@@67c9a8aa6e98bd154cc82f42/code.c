int insertionSort(char arr[],int n){
    int ar[n];
    for(int i =0;i<n;i++){
        ar[i] = arr[i];
    }
    for(int j =0;j<n;j++){
        for(int k =0;k<n;k++){
            if(ar[k] > ar[k+1]){
                int temp = ar[k];
                ar[k] = ar[k+1];
                ar[k+1] = temp;
            }
        }
    }
    for(int y=0;y<n;y++){
        arr[y] = ar[y];
    }

}
void printArray(char arr[] , int n){
    for(int i =0;i<n;i++){
        printf("%c",arr[i]);
    }
}