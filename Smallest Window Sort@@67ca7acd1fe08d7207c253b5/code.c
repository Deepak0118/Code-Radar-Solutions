int findUnsortedSubarray(int arr[],int  n){
    int ar[10000];
    int size = sizeof((arr[n])/arr[0]);
    for(int k =0 ; k<n;k++){
        ar[k] = arr[k];
    }
    
    for(int j =0;j<size;j++){
    for(int i = 0;i<size-1;i++){
            if(ar[i] > ar[i+1]){
                int temp = ar[i]; 
                ar[i] = ar[i+1];
                ar[i+1] = temp;
            }
    }
}
int count =0;
for(int h =0 ;h<size;h++){
    if(ar[h] != arr[h])
    count++;
}
return count ;
}

