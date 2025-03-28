fibonacciSeries(int n){

    int a =-1;
    int b = 1;
    int c;
    for(int i =0;i<n;i++){
        c = a+b;
        a  = b;
        b = c;
        printf("%d",c);
    }
        
    
}