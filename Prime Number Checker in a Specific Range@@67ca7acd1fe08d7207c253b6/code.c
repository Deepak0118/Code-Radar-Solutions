int printPrimesInRange(int a,int b){
    int k = a+1;
    for(int n =k;n<b;n++){
        int l =0;
        int count =0;
    for(int i =2;i<n;i++){
        if(n==2){
            l = 0;
            break;
        }
        if(n%i==0){
            l =1;
            count++;
            break;
        }
    }
    if(l == 0){
        printf("%d ",n);
    }
    if(count == b-a-1){
        printf("No prime numbers");
    }
    }
}