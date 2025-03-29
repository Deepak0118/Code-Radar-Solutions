int printPrimesInRange(int a,int b){
    int k = a+1;
    int l = 0;
    for(int n =k;n<b;n++){
    for(int i =2;i<b;i++){
        if(n==2){
            l = 0;
            break;
        }
        if(n%i==0){
            l =1;
            break;
        }
    }
    if(l == 0){
        printf("%d ",n);
    }
    else{
        printf("No prime numbers");
    }
    }
    
}