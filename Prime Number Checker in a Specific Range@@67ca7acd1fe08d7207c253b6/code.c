int printPrimesInRange(int a , int b){
    for(int i = a+1;i<b;i++){
        int z = i;
        int count =1;
        int no = 0;
        if(z ==2){
            count = 1;
        }
        else{
        for(int j =2;j<z;j++){
            if(z%j==0){
                count =0;
                break;
            }
        }
        }
        if(count==0){
            no++;
        }
        
        if(count == 1){
            printf("%d ",z);
        }
    }
    if(no == b-a-1){
        printf("No prime numbers");
    }
    
}