int printPrimesInRange(int a,int b){
    int k = a+1;
    bool l = false;
    for(int n =k;n<b;n++){
    for(int i =2;i<b;i++){
        if(n==2){
            l = false;
            break
        }
        if(n%i==0){
            l =true;
            break;
        }
    }
    if(l = false){
        printf("%d",n);
    }
    else{
        printf("No prime numbers");
    }
    }
    
}