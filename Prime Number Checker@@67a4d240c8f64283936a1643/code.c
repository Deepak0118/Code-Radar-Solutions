int isPrime(int num){
    if(num==1){
        return 0;
    }
    if(num==0){
        return 0;
    }
    int count =0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count>0){
        return 0;
    }
    else{
        return 1;
    }
}