int findKthMissing(int arr[],int n,int k){
    int max = arr[0];
    for(int j=1;j<n;j++){
        if(max<arr[j]){
            max = arr[j];
        }
    }
  
    int take =0;
    int ar[1000];
    for(int i =1;i<=max ;i++){
        int count =0;
        for(int k =0;k<n;k++){
            
            if(i==arr[k]){
                count = 1;
                break;
            }
        }
        if(!count){
            ar[take] = i;
            take++;
            
        }
       
    }
    if(take ==0){
        int s = max +k;
            for(int i =1;i<=s ;i++){
        int count =0;
        for(int k =0;k<n;k++){
            
            if(i==arr[k]){
                count = 1;
                break;
            }
        }
        if(!count){
            ar[take] = i;
            take++;
            
        }
       
    }
    }
    int a = ar[k-1];
    return a;
}