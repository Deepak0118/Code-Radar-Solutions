int printPrimesInRange(int a , int b){
    for(int i = a+1;i<a;i++){
        int z = i;
        int count =1;
        if(z ==2){
            count = 1;
        }
        else{
        for(int j =2;j<z;j++){
            if(z%j==0){
                count =0;
            }
        }
        }
        if(count == 0){
            printf("No prime numbers");
        }
        else if(count == 1){
            printf("%d ",z);
        }
    }
    
}