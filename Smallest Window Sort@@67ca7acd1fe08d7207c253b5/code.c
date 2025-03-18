int findUnsortedSubarray(int arr[],int  n){
    int ar[10000];
    // int size = sizeof((arr[n])/arr[0]);
    for(int k =0 ; k<n;k++){
        ar[k] = arr[k];
    }

    for(int i = 0;i<n;i++){
        if(i+1<n){
            if(ar[i] > ar[i+1]){
                int temp = ar[i]; 
                ar[i] = ar[i+1];
                ar[i+1] = temp;
            }
    }
    }

int count =0;
for(int h =0 ;h<n;h++){
    if(ar[h] != arr[h])
    count++;
}
return count ;
}

