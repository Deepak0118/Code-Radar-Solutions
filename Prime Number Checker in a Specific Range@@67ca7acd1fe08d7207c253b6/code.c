int printPrimesInRange(int a,int b){

    for(int i = a+1;i<b;i++){
        int b = i;
        for(int j =2;j<b;j++){
            if(a ==2){
                printf("%d",a);
            }
            if(a%j==0){
                break;
            }
            if(j==b -1 && a%j-1 !=0){
                printf("%d",j);
            }
        }

    }
}