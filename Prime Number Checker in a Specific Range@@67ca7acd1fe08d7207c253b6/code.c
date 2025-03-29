int printPrimesInRange(int a , int b){
    int no = 0;
    if(a==b){
        int q =0;
        for(int i =2;i<a;i++){
            if(a%i==0){
                printf("No prime numbers");

                q =1;
                break;
            }

        }
        if(q ==0){
            printf("%d",a);
        }

    }
    else{
    for(int i = a+1;i<b;i++){
        int z = i;
        int count =1;
        
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
            if(z>1){
            printf("%d ",z);
            }
        }
    }
    if(no == b-a-1){
        printf("No prime numbers");
    }
    }
    
}