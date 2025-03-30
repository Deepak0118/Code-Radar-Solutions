int findKthMissing(int arr[],int n,int k){
    int number =0;
    int j  =0;
    int i =0;
    int a =1;
 
    while(j<=k){
        if(j==k){
            return number;
        }
        if(arr[i] == a ){
            i++;
            a++;
        }
        else{
            number = a;
            j++;
            a++;
            
        }
    }
}