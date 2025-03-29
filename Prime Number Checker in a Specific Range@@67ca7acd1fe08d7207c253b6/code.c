printPrimesInRange(int a,int b){

    for(int i = a+1;i<b;i++){
        int a = i;
        for(int j =2;j<n;j++){
            if(a ==2){
                printf("%d",a);
            }
            if(a%j==0){
                break;
            }
            if(j==n-1 && a%j-1 !=0){
                printf("%d",j);
            }
        }

    }
}