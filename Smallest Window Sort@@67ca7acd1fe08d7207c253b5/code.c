int findUnsortedSubarray(int arr[],int n){
    int arr2[n];
    for(int j =0;j<n;j++){
        arr2[j] = arr[j];
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(j+1<n){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        }
    }
    int start=0;
    int last=0;
    int count=0;
    for(int l =0;l<n;l++){
        if(arr2[l] == arr[l]){
            count ++;
        }
    }
    for(int k =0;k<n;k++){
        if(arr2[k] != arr[k]){
            start = k;
            break;
        }
        
    }
    for(int m=n-1;m>=0;m--){
        if(arr2[m] != arr[m]){
            last = m;
            break;
        }
    }
    
    
    if(last>0){
        return  last-start+1;
    }
    else if(last==0){
        return 0;
    }
    }
    
    
